#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QMainWindow>

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog();

private:
    Ui::RegisterDialog *ui;


signals:
    void Show_logindialog();
    void Quit();

private slots:
    void on_Register_btn_clicked();
    void on_Cancel_btn_clicked();
    void Receive_show();
};

#endif // REGISTERDIALOG_H
