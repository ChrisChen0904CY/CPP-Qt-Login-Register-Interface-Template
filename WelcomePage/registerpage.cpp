#include "registerpage.h"
#include "ui_registerpage.h"
#include "utils.h"

RegisterPage::RegisterPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegisterPage)
{
    ui->setupUi(this);
    // 槽函数绑定
    this->slots_connect();
    // 生成验证码
    verify_generate();
    // 生成用户需知链接
    readme_link_set();
}

RegisterPage::~RegisterPage()
{
    delete ui;
}

// 槽函数绑定
void RegisterPage::slots_connect()
{
    // 输入状态变化消除对应行警告
    this->connect(this->ui->lineEdit,
                  &QLineEdit::textEdited,
                  this,
                  &RegisterPage::warning_clear_1);
    this->connect(this->ui->lineEdit_2,
                  &QLineEdit::textEdited,
                  this,
                  &RegisterPage::warning_clear_2);
    this->connect(this->ui->lineEdit_3,
                  &QLineEdit::textEdited,
                  this,
                  &RegisterPage::warning_clear_3);
    this->connect(this->ui->lineEdit_4,
                  &QLineEdit::textEdited,
                  this,
                  &RegisterPage::warning_clear_4);
    // 点击注册发起注册事件 --- 通过验证的话回传 {账号, 密码} 到登陆页面进行验证
    this->connect(this->ui->pushButton,
                  &QPushButton::clicked,
                  this,
                  &RegisterPage::register_asked);
    // 用户需知勾选状态UI变化
    this->connect(this->ui->checkBox,
                  &QCheckBox::stateChanged,
                  this,
                  &RegisterPage::read_flip);
}

// 警告清除函数
void RegisterPage::warning_clear_1()
{
    this->ui->lineEdit->setGraphicsEffect(none_shadow(this));
    // 复位该行空状态
    this->empty_symbol &= 0x1110;
}
void RegisterPage::warning_clear_2()
{
    this->ui->lineEdit_2->setGraphicsEffect(none_shadow(this));
    // 复位该行空状态
    this->empty_symbol &= 0x1101;
}
void RegisterPage::warning_clear_3()
{
    this->ui->lineEdit_3->setGraphicsEffect(none_shadow(this));
    // 复位该行空状态
    this->empty_symbol &= 0x1011;
}
void RegisterPage::warning_clear_4()
{
    this->ui->lineEdit_4->setGraphicsEffect(none_shadow(this));
    // 复位该行空状态
    this->empty_symbol &= 0x0111;
}

void RegisterPage::empty_check()
{
    // 空行判断
    // 账号没输入
    if (this->ui->lineEdit->text()=="") {
        // 设置账号输入行警告
        this->ui->lineEdit->setGraphicsEffect(red_shadow(this));
        // 更新状态
        this->empty_symbol |= 0x0001;
    }
    // 密码没输入
    if (this->ui->lineEdit_2->text()=="") {
        // 设置密码输入行警告
        this->ui->lineEdit_2->setGraphicsEffect(red_shadow(this));
        // 更新状态
        this->empty_symbol |= 0x0010;
    }
    // 密码再次确认没输入
    if (this->ui->lineEdit_3->text()=="") {
        // 设置密码再次确认输入行警告
        this->ui->lineEdit_3->setGraphicsEffect(red_shadow(this));
        // 更新状态
        this->empty_symbol |= 0x0100;
    }
    // 人机验证没输入
    if (this->ui->lineEdit_4->text()=="") {
        // 设置人机验证输入行警告
        this->ui->lineEdit_4->setGraphicsEffect(red_shadow(this));
        // 更新状态
        this->empty_symbol |= 0x1000;
    }
}

// 空行警告弹窗
void RegisterPage::empty_warning()
{
    // 优先警告账号为空
    if (this->empty_symbol&ACCOUNT_EMPTY) {
        QMessageBox::warning(this, "输入警告", "账号不能为空");
        return;
    }
    // 其次警告密码为空
    if (this->empty_symbol&PASSWORD_EMPTY) {
        QMessageBox::warning(this, "输入警告", "密码不能为空");
        return;
    }
    // 再次警告确认行为空
    if (this->empty_symbol&RPASSWORD_EMPTY) {
        QMessageBox::warning(this, "输入警告", "密码确认行不能为空");
        return;
    }
    // 最后警告人机验证为空
    if (this->empty_symbol&VERIFY_EMPTY) {
        QMessageBox::warning(this, "输入警告", "人机验证输入不能为空");
        return;
    }
}

void RegisterPage::register_asked()
{
    // 判断空行
    empty_check();
    // 空行警告弹窗
    empty_warning();
    // 有空行则直接退出
    if (this->empty_symbol != ALL_FULL) {
        // 刷新验证码再退出
        verify_generate();
        return;
    }
    // 进行人机检测
    if (this->ui->lineEdit_4->text().toInt() != this->ans) {
        QMessageBox::critical(this, "验证未通过", "人机验证未通过");
        // 刷新验证码再退出
        verify_generate();
        return;
    }
    // 成功通过空行检测和人机验证
    // 判断两次密码是否一致
    if (this->ui->lineEdit_2->text() != this->ui->lineEdit_3->text()) {
        QMessageBox::critical(this, "注册失败", "两次密码不一致");
        // 刷新验证码再退出
        verify_generate();
        return;
    }
    // 判断是否勾选了已读条款
    if (!this->ui->checkBox->isChecked()) {
        QMessageBox::critical(this, "注册失败", "请阅读用户需知并勾选已读");
        return;
    }
    // 发射注册信号
    QVector<QString> user_info = {this->ui->lineEdit->text(),
                                  this->ui->lineEdit_2->text(),
                                  (this->ui->checkBox_2->isChecked()) ? QString("U") : QString("A")};
    emit this->account_verify(user_info);
    // 并刷新验证码
    verify_generate();
}

void RegisterPage::verify_generate()
{
    QVector<QString> verify_codes = Get_Random_Verification();
    QString formula = "";
    for (int i = 0; i < 7; i++) {
        formula += verify_codes[i] + " ";
    }
    formula += "=";
    this->ans = verify_codes[7].toInt();
    // 先将算式设置到验证码标签上
    this->ui->label_4->setText(formula);
}

// 用户需知阅读状态翻转
void RegisterPage::read_flip()
{
    if (this->ui->checkBox->isChecked()) {
        this->ui->checkBox->setStyleSheet("QCheckBox::indicator\
                                           { border: 1px solid black;\
                                             width: 14px;\
                                             height: 14px;\
                                             border-radius: 8px;\
                                             background-color: rgb(0, 95, 184); }");
    } else {
        this->ui->checkBox->setStyleSheet("QCheckBox::indicator\
                                           { border: 1px solid black;\
                                             width: 14px;\
                                             height: 14px;\
                                             border-radius: 8px;\
                                             background-color: white; }");
    }
}

// 设置用户需知链接
void RegisterPage::readme_link_set()
{
    this->ui->label_6->setText("<font>我已阅读\
                                <a href='https://bilibili.com'>《用户需知》</a>\
                                并同意其中所有内容</font>");
    // 允许打开外部链接
    this->ui->label_6->setOpenExternalLinks(true);
}

// 账号重复报错
void RegisterPage::account_duplicated_warning()
{
    QMessageBox::critical(this, "注册失败", "账号名已存在！");
    // 刷新验证码再退出
    verify_generate();
}

// 注册成功
void RegisterPage::successful_register()
{
    QString welcome_text = "恭喜你！";
    // 添加注册类型称呼
    if (this->ui->checkBox_2->isChecked()) {
        welcome_text += "<font color=\"green\">普通用户</font>";
    }
    else {
        welcome_text += "<font color=\"blue\">管理员</font>";
    }
    // 添加用户名
    welcome_text += "&nbsp;&lt;<b>" + this->ui->lineEdit->text() + "</b>&gt;&nbsp;";
    // 欢迎语
    welcome_text += "注册成功！";
    QMessageBox::information(this, "注册成功", welcome_text);
    // 刷新验证码再退出
    verify_generate();
}
