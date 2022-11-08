#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtDebug>
#include <QMessageBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase db = QSqlDatabase :: addDatabase("QSQLITE");
    QSqlQuery query;
    void connClose(){
        db.close();
        db.removeDatabase(QSqlDatabase :: defaultConnection);
    }
    bool connOpen(){
        db.setDatabaseName("D:/Projets fin d'etude L1 ENI/GESTION_BANCAIRE_BNI/data/clientDB.db");
        if (!db.open()) {
            qDebug() << "Failed to open";
            return false;
        }else{
            qDebug() << "Connexion établie";
            return  true;
        }
    }

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_m_newClient_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
