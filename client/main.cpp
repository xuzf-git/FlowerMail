#include "mainwindow.h"
#include <QApplication>
#include "senddialog.h"
#include "logindialog.h"
#include "senddialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LoginDialog log;
    SendDialog temp;

//    temp.show();
    if(log.exec()==QDialog::Accepted)
    {
        log.close();
//        w.setWindowState(Qt::WindowMaximized);
        w.show();
    }
    return a.exec();
}
