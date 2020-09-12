#include "logindialog.h"
#include "ui_logindialog.h"
#include "registerdialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
    // 下面代码为界面渲染代码
//    this->setStyleSheet("background-color: rgb(53,57,74);");
//    ui->Username->setStyleSheet("background:transparent;border-width:0;border-style:outset");
//    ui->Password->setStyleSheet("background:transparent;border-width:0;border-style:outset");
//    this->setWindowFlags(Qt::FramelessWindowHint);
//    this->setAttribute(Qt::WA_TranslucentBackground);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

// Todo，进入界面focus on 用户名输入栏

//下面函数为当登录按钮被点击时的响应动作
//需要加入密码验证功能
void LoginDialog::on_login_btn_clicked()
{
    this->hide();
    emit Show_mainwindow();
}

//下面函数为注册按钮被点击时的响应动作,进入注册页面，已实现
void LoginDialog::on_Register_btn_clicked()
{
    this->hide();

    //美化代码，清除用户输入
    this->ui->Username->clear();
    this->ui->Password->clear();

    emit Show_registerdialog();
}

//显示窗口函数，不用管
void LoginDialog::Receive_show()
{
    this->show();
}




