#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void Receive_show();

    void on_pushButton_clicked();

    void on_Write_btn_clicked();

    void on_Set_btn_clicked();

    void on_Receive_btn_clicked();

    void on_Draft_btn_clicked();

    void on_Send_btn_clicked();

    void on_Dustbin_btn_clicked();

    void on_Contacts_btn_clicked();

signals:
    void Show_logindialog();
    void Show_senddialog();
    void Show_settingdialog();

};

#endif // MAINWINDOW_H
