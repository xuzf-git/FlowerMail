#include "senddialog.h"
#include "ui_senddialog.h"

SendDialog::SendDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SendDialog)
{
    ui->setupUi(this);
    ui->File_widget->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->Color_widget->setStyleSheet("background:transparent;border-width:0;border-style:outset");
}

SendDialog::~SendDialog()
{
    delete ui;
}
