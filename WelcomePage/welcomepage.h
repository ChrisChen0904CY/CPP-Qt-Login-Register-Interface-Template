#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QWidget>
#include <QMessageBox>
#include <QVector>
#include <QDebug>

// SQL 数据库相关包的导入
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

// 导入自定义页面
#include "registerpage.h"

// 判空状态宏定义 共有两个输入行 故采用 2 bits
#define W_ALL_EMPTY 0x11
#define W_ACCOUNT_EMPTY 0x01
#define W_PASSWORD_EMPTY 0x10
#define W_ALL_FULL 0x00

QT_BEGIN_NAMESPACE
namespace Ui {
class WelcomePage;
}
QT_END_NAMESPACE

class WelcomePage : public QWidget
{
    Q_OBJECT

public:
    WelcomePage(QWidget *parent = nullptr);
    ~WelcomePage();
    // 槽函数绑定
    void slots_connect();
    // 建立数据库
    void DB_Create(QString File_Name);
    // 打开数据库
    void Open_DB();
    // 关闭数据库
    void Close_DB();
    // 获取全部数据
    void QueryAllData();
    // 获取指定数据
    QVector<QVector<QString>> QuerySpecificData(QString col_name, QString val);
    // 判空与空行警告
    void empty_check();
    void empty_warning();
    // 注册新账户
    void Create_New_Account(QVector<QString> info={});

public slots:
    // 点击小眼睛按钮反转图标以及密码显示状态
    void passwordStatusFlipped();
    // 登录函数
    void sign_in();
    // 注册函数
    void register_asked();
    // 输入警告清除函数
    void warning_clear();
    void warning_account_clear();
    void warning_password_clear();
    // 检验账号是否重复
    void account_duplicated_check(QVector<QString>);

private:
    Ui::WelcomePage *ui;
    // 注册页面
    RegisterPage* register_page = NULL;
    // 判空状态逻辑数 --- 初始状态全满
    short empty_symbol = W_ALL_FULL;
};
#endif // WELCOMEPAGE_H
