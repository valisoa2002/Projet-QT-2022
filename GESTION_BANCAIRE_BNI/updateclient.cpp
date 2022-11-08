#include "updateclient.h"
#include "mainwindow.h"
#include "ui_updateclient.h"

UpdateClient::UpdateClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateClient)
{
    ui->setupUi(this);
    setFixedSize(300,240);
    setWindowTitle("Modifier client...");
    setWindowIcon(QIcon(":/img/upload.svg"));
    ui->m_soldeUpdated->setValidator(new QIntValidator(0,1000000000));
}

UpdateClient::~UpdateClient()
{
    delete ui;
}

void UpdateClient::on_m_modifier_clicked()
{
    QString lastClient,newClient,compte,solde;
    lastClient = ui->m_lastClient->text();
    newClient = ui->m_clientUpdated->text();
    compte = ui->m_compteUpdated->text();
    solde = ui->m_soldeUpdated->text();

    MainWindow conn;
    QSqlQuery query;

    conn.connOpen();

    if (!conn.connOpen()) {
        qDebug()  << "Failed to open";
    }

    //MODIFIER CLIENT DANS LA TABLE EN SELECTIONNANT LE NOM(client)
    query.prepare("update client set client='"+newClient+"', Num_compte='"+compte+"',Solde='"+solde+"' where client='"+lastClient+"'");
    if (!lastClient.isEmpty() && !newClient.isEmpty() && !compte.isEmpty() && !solde.isEmpty()) {
        if (query.exec()) {
            QMessageBox :: information(this,tr("Update Successfully"), tr("Data updated"));
            conn.connClose();
        }
        this->hide();
    }else{
        QMessageBox :: critical(this,tr("Update error"),tr("Completer les champs"));
    }




}
