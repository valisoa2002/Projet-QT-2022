/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *m_quitter;
    QPushButton *m_deleteButton;
    QPushButton *m_updateButton;
    QPushButton *m_loadTable;
    QPushButton *m_addButton;
    QLabel *label;

    void setupUi(QDialog *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(700, 410);
        verticalLayoutWidget = new QWidget(Client);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(19, 39, 661, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        m_quitter = new QPushButton(Client);
        m_quitter->setObjectName(QString::fromUtf8("m_quitter"));
        m_quitter->setGeometry(QRect(594, 370, 91, 31));
        m_deleteButton = new QPushButton(Client);
        m_deleteButton->setObjectName(QString::fromUtf8("m_deleteButton"));
        m_deleteButton->setGeometry(QRect(480, 370, 91, 31));
        m_updateButton = new QPushButton(Client);
        m_updateButton->setObjectName(QString::fromUtf8("m_updateButton"));
        m_updateButton->setGeometry(QRect(360, 370, 101, 31));
        m_loadTable = new QPushButton(Client);
        m_loadTable->setObjectName(QString::fromUtf8("m_loadTable"));
        m_loadTable->setGeometry(QRect(20, 370, 121, 31));
        m_addButton = new QPushButton(Client);
        m_addButton->setObjectName(QString::fromUtf8("m_addButton"));
        m_addButton->setGeometry(QRect(240, 370, 101, 31));
        label = new QLabel(Client);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(26, 10, 171, 21));

        retranslateUi(Client);
        QObject::connect(m_quitter, SIGNAL(clicked()), Client, SLOT(close()));

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QDialog *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Dialog", nullptr));
        m_quitter->setText(QCoreApplication::translate("Client", "Quitter", nullptr));
        m_deleteButton->setText(QCoreApplication::translate("Client", "Supprimer", nullptr));
        m_updateButton->setText(QCoreApplication::translate("Client", "Modifier", nullptr));
        m_loadTable->setText(QCoreApplication::translate("Client", "CHARGER TABLE", nullptr));
        m_addButton->setText(QCoreApplication::translate("Client", "Ajouter", nullptr));
        label->setText(QCoreApplication::translate("Client", "Liste des clients ci- dessous:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
