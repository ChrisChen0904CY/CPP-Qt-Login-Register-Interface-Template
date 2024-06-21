#ifndef REGISTERPAGE_H
#define REGISTERPAGE_H

#include <QWidget>
#include <QMessageBox>
#include <QVector>
#include <QDebug>

// 判空状态宏定义 共有四个输入行 故采用 4 bits
#define ALL_EMPTY 0x1111
#define ACCOUNT_EMPTY 0x0001
#define PASSWORD_EMPTY 0x0010
#define RPASSWORD_EMPTY 0x0100
#define VERIFY_EMPTY 0x1000
#define ALL_FULL 0x0000

// 管理员注册码
#define ADMIN_REGISTER_CODE 1145141919810

namespace Ui {
class RegisterPage;
}

class RegisterPage : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterPage(QWidget *parent = nullptr);
    ~RegisterPage();
    // 槽函数绑定
    void slots_connect();
    // 空行判断
    void empty_check();
    // 空行警告弹窗
    void empty_warning();
    // 生成验证算式和对应答案
    void verify_generate();
    // 设置用户需知链接
    void readme_link_set();
    // 账号重复报错
    void account_duplicated_warning();
    // 注册成功
    void successful_register();

signals:
    // 账号密码回传判重信号
    void account_verify(QVector<QString> user_info);

public slots:
    // 警告清除函数
    void warning_clear_1();
    void warning_clear_2();
    void warning_clear_3();
    void warning_clear_4();
    // 注册函数
    void register_asked();
    // 用户需知阅读状态翻转
    void read_flip();

private:
    Ui::RegisterPage *ui;
    // 判空状态逻辑数 --- 初始状态全满
    short empty_symbol = ALL_FULL;
    // 验证算式答案
    int ans;
};

#endif // REGISTERPAGE_H
