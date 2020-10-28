#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_sign_in_button_clicked()
{
    QString login = ui->input_login->text();
    QString password = ui->input_password->text();

    if (login == "admin" && password == "admin")
    {
        QMessageBox::information(this, "Success", login + " logged in!");
    }
    else
    {
        QMessageBox::critical(this, "Failed", "Wrong login or password!");
    }
}
