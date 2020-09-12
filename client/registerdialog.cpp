#include "registerdialog.h"
#include "ui_registerdialog.h"

RegisterDialog::RegisterDialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

// Todo，进入界面focus on 用户名输入栏

// 点击注册按钮，进行服务端验证，返回登录窗口
void RegisterDialog::on_Register_btn_clicked()
{
    this->hide();
    emit Show_logindialog();
}


// 点击取消按钮，返回登录窗口，已实现
void RegisterDialog::on_Cancel_btn_clicked()
{
    this->hide();
    //以下两个代码为窗口关闭后清楚用户输入内容，属于美化内容
    this->ui->Username->clear();
    this->ui->Password->clear();
    emit Show_logindialog();
}

//显示窗口函数，不用管
void RegisterDialog::Receive_show()
{
    this->show();
}
