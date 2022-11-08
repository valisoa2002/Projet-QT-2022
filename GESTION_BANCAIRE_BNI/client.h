#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>


namespace Ui {
class Client;
}

class Client : public QDialog
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr);
    ~Client();

private slots:
    void on_m_addButton_clicked();

    void on_m_updateButton_clicked();

    void on_m_deleteButton_clicked();

    void on_m_loadTable_clicked();

private:
    Ui::Client *ui;
};

#endif // CLIENT_H
