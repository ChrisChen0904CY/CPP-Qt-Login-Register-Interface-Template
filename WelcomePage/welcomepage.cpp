#include "welcomepage.h"
#include "./ui_welcomepage.h"
#include "utils.h"

// 数据库
QSqlDatabase db;

WelcomePage::WelcomePage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WelcomePage)
{
    ui->setupUi(this);
    // 槽函数绑定
    slots_connect();
    // 建立数据库并链接
    this->DB_Create("Accounts.db");
    // 打开数据库
    Open_DB();
}

WelcomePage::~WelcomePage()
{
    // 关闭数据库
    Close_DB();
    delete ui;
}

// 槽函数绑定
void WelcomePage::slots_connect()
{
    // 密码显示状态翻转
    this->connect(this->ui->pushButton_2,
                  &QPushButton::clicked,
                  this,
                  &WelcomePage::passwordStatusFlipped);
    // 两个输入行的警告清除
    this->connect(this->ui->lineEdit,
                  &QLineEdit::textEdited,
                  this,
                  &WelcomePage::warning_account_clear);
    this->connect(this->ui->lineEdit_2,
                  &QLineEdit::textEdited,
                  this,
                  &WelcomePage::warning_password_clear);
    // 登录函数绑定
    this->connect(this->ui->pushButton_5,
                  &QPushButton::clicked,
                  this,
                  &WelcomePage::sign_in);
    // 注册函数绑定
    this->connect(this->ui->pushButton,
                  &QPushButton::clicked,
                  this,
                  &WelcomePage::register_asked);
}

void WelcomePage::passwordStatusFlipped()
{
    if(this->ui->lineEdit_2->echoMode()==QLineEdit::Password) {
        this->ui->pushButton_2->setIcon(QIcon("./resources/seen.png"));
        this->ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
    }
    else {
        this->ui->pushButton_2->setIcon(QIcon("./resources/unseen.png"));
        this->ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    }
}

void WelcomePage::empty_check()
{
    // 空行判断
    // 账号没输入
    if (this->ui->lineEdit->text()=="") {
        // 设置账号输入行警告
        this->ui->lineEdit->setGraphicsEffect(red_shadow(this));
        // 更新状态
        this->empty_symbol |= 0x01;
    }
    // 密码没输入
    if (this->ui->lineEdit_2->text()=="") {
        // 设置密码输入行警告
        this->ui->lineEdit_2->setGraphicsEffect(red_shadow(this));
        // 更新状态
        this->empty_symbol |= 0x10;
    }
}

// 空行警告弹窗
void WelcomePage::empty_warning()
{
    // 优先警告账号为空
    if (this->empty_symbol&W_ACCOUNT_EMPTY) {
        QMessageBox::warning(this, "输入警告", "账号不能为空");
        return;
    }
    // 其次警告密码为空
    if (this->empty_symbol&W_PASSWORD_EMPTY) {
        QMessageBox::warning(this, "输入警告", "密码不能为空");
        return;
    }
}

// 登录函数
void WelcomePage::sign_in()
{
    // 判空
    empty_check();
    empty_warning();
    // 有空行则直接退出
    if (this->empty_symbol != ALL_FULL) {
        return;
    }
    // 查询数据库
    QString user_name = this->ui->lineEdit->text();
    QVector<QVector<QString>> res = QuerySpecificData("User_Name",
                                                      user_name);
    // 密码
    QString password = this->ui->lineEdit_2->text();
    // 普通用户/管理员密码
    QString pass_u = "";
    QString pass_a = "";
    // 用户名不存在
    if (res.size() == 0) {
        QMessageBox::critical(this, "登录失败", "用户名不存在");
        return;
    }
    // 查询到一个
    else if (res.size() == 1) {
        if (res[0][2] == "Admin") {
            pass_a = res[0][1];
        }
        else {
            pass_u = res[0][1];
        }
    }
    // 查询到两个
    else{
        for (auto user:res) {
            if (user[2] == "Admin") {
                pass_a = user[1];
            }
            else {
                pass_u = user[1];
            }
        }
    }
    // 普通用户登录
    if (this->ui->checkBox_2->isChecked()) {
        // 若无在库普通用户信息则提示账号不存在
        if (pass_u == "") {
            QMessageBox::critical(this, "登录失败", "用户名不存在");
            return;
        }
        // 密码检验
        if (pass_u != password) {
            QMessageBox::critical(this, "登录失败", "密码错误");
            return;
        }
        QMessageBox::information(this, "登录成功", "普通用户 <"\
                                                  +this->ui->lineEdit->text()\
                                                  +"> 登陆成功！");
        // 跳转登录后的页面并关闭登录页面
        QWidget* mainPage = new QWidget();
        mainPage->show();
        this->Close_DB();
        this->close();
    }
    else {
        // 若无在库管理员信息则提示账号不存在
        if (pass_a == "") {
            QMessageBox::critical(this, "登录失败", "用户名不存在");
            return;
        }
        // 密码检验
        if (pass_a != password) {
            QMessageBox::critical(this, "登录失败", "密码错误");
            return;
        }
        QMessageBox::information(this, "登录成功", "管理员 <"\
                                                  +this->ui->lineEdit->text()\
                                                       +"> 登陆成功！");
        // 跳转登录后的页面并关闭登录页面
        QWidget* mainPage = new QWidget();
        mainPage->show();
        this->Close_DB();
        this->close();
    }
    return;
}

// 输入警告清除函数
void WelcomePage::warning_clear()
{
    this->ui->lineEdit->setGraphicsEffect(none_shadow(this));
    this->ui->lineEdit_2->setGraphicsEffect(none_shadow(this));
}
// 单独警告清除函数
void WelcomePage::warning_account_clear()
{
    this->ui->lineEdit->setGraphicsEffect(none_shadow(this));
    // 复位该行空状态
    this->empty_symbol &= 0x10;
}
void WelcomePage::warning_password_clear()
{
    this->ui->lineEdit_2->setGraphicsEffect(none_shadow(this));
    // 复位该行空状态
    this->empty_symbol &= 0x01;
}

// 注册函数
void WelcomePage::register_asked()
{
    if (register_page!=NULL) {
        // 防止多页面打开
        register_page->close();
    }
    // 建立并打开一个注册页面
    register_page = new RegisterPage();
    // 账号重复检验
    this->connect(this->register_page,
                  &RegisterPage::account_verify,
                  this,
                  &WelcomePage::account_duplicated_check);
    register_page->show();
}

// 用户数据库建立
void WelcomePage::DB_Create(QString File_Name){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(File_Name);
    db.setUserName("Admin");
    db.setPassword("12345678");
}

// 打开数据库
void WelcomePage::Open_DB()
{
    if (!db.open()) {
        QMessageBox::warning(this, QObject::tr("Database Error"),
                             db.lastError().text());
    }
    // 当表格不存在时建立用户信息表
    QString table_create = "CREATE TABLE IF NOT EXISTS Users ("\
                           "User_Name VARCHAR(30),"\
                           "Password VARCHAR(30),"\
                           "Type VARCHAR(5)"\
                           ");";
    QSqlQuery table_query;
    table_query.exec(table_create);
}

// 关闭数据库
void WelcomePage::Close_DB(){
    db.close();
}

void WelcomePage::QueryAllData(void)
{
    QString select_all_sql = "select * from Users;";
    QSqlQuery sql_query;
    sql_query.exec(select_all_sql);
    // Row ID
    int id = 0;
    while(sql_query.next())
    {
        QString name = sql_query.value("User_Name").toString();
        QString password = sql_query.value("Password").toString();
        QString type = sql_query.value("Type").toString();
        qDebug()<<tr("id: ")<<id++;
        qDebug()<<tr("name: ")<<name;
        qDebug()<<tr("password: ")<<password;
        qDebug()<<tr("type: ")<<type;
    }
}

// 查询指定列的指定数据
QVector<QVector<QString>> WelcomePage::QuerySpecificData(QString col_name, QString val){
    QString select_sql = "select * from Users where ";
    select_sql.append(col_name);
    select_sql.append("==\"");
    select_sql.append(val);
    select_sql.append("\";");
    QSqlQuery sql_query;
    sql_query.exec(select_sql);
    // Return Data
    QVector<QVector<QString>> result = {};
    while(sql_query.next())
    {
        QVector<QString> tmp;
        tmp.append(sql_query.value("User_Name").toString());
        tmp.append(sql_query.value("Password").toString());
        tmp.append(sql_query.value("Type").toString());
        result.append(tmp);
    }
    return result;
}

// 新建一个用户的账户信息
void WelcomePage::Create_New_Account(QVector<QString> info){
    QString select_sql = "insert into Users (User_Name, Password, Type) values(\"";
    select_sql.append(info[0]);
    select_sql.append("\",\"");
    select_sql.append(info[1]);
    select_sql.append("\",\"");
    select_sql.append((info[2]=="U") ? "User" : "Admin");
    select_sql.append("\");");
    QSqlQuery sql_query;
    sql_query.exec(select_sql);
}

// 检验账号是否重复
void WelcomePage::account_duplicated_check(QVector<QString> user_info)
{
    QVector<QVector<QString>> res = QuerySpecificData("User_Name", user_info[0]);
    // qDebug() << "RES: " << res;
    // 如果找到了该用户名 --- 则让注册页面报错重复
    if (res.size() != 0) {
        // 判断是否连类型都一样
        bool same = false;
        // 查询重复用户名的身份类别
        for (auto user:res) {
            if (user[2][0]==user_info[2][0]) {
                same = true;
                break;
            }
        }
        if (same){
            this->register_page->account_duplicated_warning();
            return;
        }
    }
    // 否则注册成功
    // 写入新账号信息
    this->Create_New_Account(user_info);
    // qDebug() << user_info;
    // 弹出注册成功消息
    this->register_page->successful_register();
}
