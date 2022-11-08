#include "client.h"
#include "addclient.h"
#include "updateclient.h"
#include "deleteclient.h"

#include "mainwindow.h"

#include "ui_client.h"

Client::Client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
    setFixedSize(700,410);
    setWindowTitle("A propos du client");
}

Client::~Client()
{
    delete ui;
}

void Client::on_m_addButton_clicked()
{
    AddClient ajouter;
    ajouter.setModal(true);
    ajouter.exec();

}

void Client::on_m_updateButton_clicked()
{
    UpdateClient modifier;
    modifier.setModal(true);
    modifier.exec();

}

void Client::on_m_deleteButton_clicked()
{
    DeleteClient supprimer;
    supprimer.setModal(true);
    supprimer.exec();


}

void Client::on_m_loadTable_clicked()
{
    MainWindow conn;

    QSqlQueryModel *modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery *query = new QSqlQuery(conn.db);
    query->prepare("select * from client");

    query->exec();

    modal->setQuery(*query);
    ui->tableView->setModel(modal);

    qDebug() << (modal->rowCount());

}
