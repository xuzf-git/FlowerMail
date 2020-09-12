#include "mainwindow.h"
#include <QApplication>
#include "senddialog.h"
#include "logindialog.h"
#include "senddialog.h"
#include "registerdialog.h"
#include "settingdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginDialog login_window;
    RegisterDialog register_window;
    SendDialog send_window;
    SettingDialog setting_window;
    MainWindow w;

    login_window.show();

    QObject::connect(&login_window,SIGNAL(Show_registerdialog()),&register_window,SLOT(Receive_show())); //登录窗口点击注册打开注册窗口
    QObject::connect(&login_window,SIGNAL(Show_mainwindow()),&w,SLOT(Receive_show()));                   //登录窗口点击登录打开主窗口
    QObject::connect(&register_window,SIGNAL(Show_logindialog()),&login_window,SLOT(Receive_show()));    //注册窗口点击取消打开登录窗口
    QObject::connect(&register_window,SIGNAL(Show_logindialog()),&login_window,SLOT(Receive_show()));    //注册窗口点击注册打开主窗口

    QObject::connect(&w,SIGNAL(Show_logindialog()),&login_window,SLOT(Receive_show()));                  //主窗口点击退出打开登录窗口
    QObject::connect(&w,SIGNAL(Show_senddialog()),&send_window,SLOT(Receive_show()));                    //主窗口点击发送打开写邮件窗口
    QObject::connect(&w,SIGNAL(Show_settingdialog()),&setting_window,SLOT(Receive_show()));              //主窗口点击设置打开设置窗口

    return a.exec();
}
