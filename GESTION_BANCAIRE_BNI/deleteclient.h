#ifndef DELETECLIENT_H
#define DELETECLIENT_H

#include <QDialog>
#include <QSqlQuery>
#include <QtDebug>


namespace Ui {
class DeleteClient;
}

class DeleteClient : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteClient(QWidget *parent = nullptr);
    ~DeleteClient();

private slots:

    void on_m_deleteClient_clicked();

private:
    Ui::DeleteClient *ui;
};

#endif // DELETECLIENT_H
