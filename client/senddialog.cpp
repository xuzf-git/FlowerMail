#include "senddialog.h"
#include "ui_senddialog.h"

SendDialog::SendDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SendDialog)
{
    ui->setupUi(this);
    // 美化代码
    ui->File_widget->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->Color_widget->setStyleSheet("background:transparent;border-width:0;border-style:outset");
}

SendDialog::~SendDialog()
{
    delete ui;
}

//点击发送按钮后，邮件发向服务端
void SendDialog::on_Send_btn_clicked()
{

}

//点击添加附件按钮，调用上传附件功能
void SendDialog::on_Attach_file_btn_clicked()
{

}


//下面为显示窗口代码，不用管
void SendDialog::Receive_show()
{
    this->show();
}
