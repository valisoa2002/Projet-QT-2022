#include "deleteclient.h"
#include "mainwindow.h"

#include "ui_deleteclient.h"

DeleteClient::DeleteClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteClient)
{
    ui->setupUi(this);
    setFixedSize(310,120);
    setWindowTitle("Supprimer Client...");
    setWindowIcon(QIcon(":/img/trash.svg"));
}

DeleteClient::~DeleteClient()
{
    delete ui;
}


void DeleteClient::on_m_deleteClient_clicked()
{
    QString compte;
    compte = ui->m_compteDeleted->text();

    MainWindow conn;
    QSqlQuery query;

    conn.connOpen();

    if (!conn.connOpen()) {
        qDebug()  << "Failed to open";
    }


    //SUPPRIMER CLIENT SELON NUMERO DE COMPTE(Num_compte)
    query.prepare("delete from client where Num_compte='"+compte+"'");
    if (!compte.isEmpty()) {
        if (query.exec()) {
            QMessageBox :: information(this,tr("Delete Successfully"),tr("Data deleted"));
            conn.connClose();
        }
        this->hide();
    }else{
         QMessageBox :: critical(this,tr("Delete error"),tr("Completer les champs"));
    }
}
