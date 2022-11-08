#include "addclient.h"
#include "mainwindow.h"

#include "ui_addclient.h"
#include<QIntValidator>

AddClient::AddClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddClient)
{
    ui->setupUi(this);
    setFixedSize(300,240);
    setWindowTitle("Ajouter client...");
    setWindowIcon(QIcon(":/img/save.svg"));
    ui->m_solde->setValidator(new QIntValidator(0,1000000000));
}

AddClient::~AddClient()
{
    delete ui;
}


void AddClient::on_m_ajouter_clicked()
{
    QString client,compte,solde;
    client = ui->m_client->text();
    compte = ui->m_compte->text();
    solde = ui->m_solde->text();


    MainWindow conn;
    QSqlQuery query;


    if (!conn.connOpen()) {
        qDebug()  << "Failed to open";
    }

    //AJOUTER CLIENTS A LA BASE DES DONNEES
    query.prepare("insert into client (client,Num_compte,Solde) values ('"+client+"','"+compte+"','"+solde+"')");

    if (!client.isEmpty() && !compte.isEmpty() && !solde.isEmpty()) {
        if (query.exec()) {
            QMessageBox :: information(this,tr("Insert Successfully"),tr("Data saved"));
            conn.connOpen();
        }
        this->hide();
    }else{
        QMessageBox :: critical(this,tr("Insert Error"),tr("Completer les champs"));
    }







}
