#include "mainwindow.h"
#include "client.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(760,480);
    setWindowTitle("Gestion bancaire de BNI");
    setWindowIcon(QIcon(":/img/logoENI.png"));

    QPixmap pix(":/img/logoENI.png");
    int h = ui->imageLabel->height();
    int w = ui->imageLabel->width();
    ui->imageLabel->setPixmap(pix.scaled(w,h,Qt :: KeepAspectRatio));

    ui->textEdit->setReadOnly(true);

    if (!db.open()) {
        ui->labelStatus->setText("Erreur de la connexion");

    }else{
       ui->labelStatus->setText("Connexion établie");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_m_newClient_clicked()
{
    Client client;
    client.setModal(true);
    client.exec();

}

