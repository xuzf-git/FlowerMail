#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private slots:
    void on_login_btn_clicked();

    void on_Register_btn_clicked();

    void Receive_show();

private:
    Ui::LoginDialog *ui;

signals:
    void Show_registerdialog();
    void Quit();
    void Show_mainwindow();
};

#endif // LOGINDIALOG_H
