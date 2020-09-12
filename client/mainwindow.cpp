#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



//显示窗口函数，不用管
void MainWindow::Receive_show()
{
    this->show();
}

//发送按钮，需要加入发送函数
void MainWindow::on_pushButton_clicked()
{
    this->hide();
    emit Show_logindialog();
}

//点击写信按钮，弹出写信窗口，目前功能已满足
void MainWindow::on_Write_btn_clicked()
{
    emit Show_senddialog();
}

//点击设置按钮，弹出设置窗口，目前功能以满足
void MainWindow::on_Set_btn_clicked()
{
    emit Show_settingdialog();
}

//点击收件箱按钮，文本显示页面呈现邮件列表
void MainWindow::on_Receive_btn_clicked()
{

}

//点击草稿箱按钮，文本显示页面呈现草稿箱列表
void MainWindow::on_Draft_btn_clicked()
{

}

//点击已发送按钮，文本显示页面呈现已发送列表
void MainWindow::on_Send_btn_clicked()
{

}

//点击垃圾箱按钮，文本显示页面呈现垃圾箱列表
void MainWindow::on_Dustbin_btn_clicked()
{

}

//点击联系人按钮，文本显示页面呈现联系人列表
void MainWindow::on_Contacts_btn_clicked()
{

}
