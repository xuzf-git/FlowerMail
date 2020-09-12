#ifndef SENDDIALOG_H
#define SENDDIALOG_H

#include <QDialog>

namespace Ui {
class SendDialog;
}

class SendDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SendDialog(QWidget *parent = nullptr);
    ~SendDialog();

private:
    Ui::SendDialog *ui;

private slots:
    void Receive_show();
    void on_Send_btn_clicked();
    void on_Attach_file_btn_clicked();
};

#endif // SENDDIALOG_H
