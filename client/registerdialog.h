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
};

#endif // REGISTERDIALOG_H
