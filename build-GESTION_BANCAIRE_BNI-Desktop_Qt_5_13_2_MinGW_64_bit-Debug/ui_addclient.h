/********************************************************************************
** Form generated from reading UI file 'addclient.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENT_H
#define UI_ADDCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddClient
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *clientLabel;
    QLineEdit *m_client;
    QSpacerItem *verticalSpacer_2;
    QLabel *numCompteLabel;
    QLineEdit *m_compte;
    QLabel *soldeLabel;
    QLineEdit *m_solde;
    QSpacerItem *verticalSpacer;
    QPushButton *m_ajouter;

    void setupUi(QDialog *AddClient)
    {
        if (AddClient->objectName().isEmpty())
            AddClient->setObjectName(QString::fromUtf8("AddClient"));
        AddClient->resize(301, 238);
        verticalLayoutWidget = new QWidget(AddClient);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(19, 20, 261, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        clientLabel = new QLabel(verticalLayoutWidget);
        clientLabel->setObjectName(QString::fromUtf8("clientLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, clientLabel);

        m_client = new QLineEdit(verticalLayoutWidget);
        m_client->setObjectName(QString::fromUtf8("m_client"));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_client);

        verticalSpacer_2 = new QSpacerItem(191, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_2);

        numCompteLabel = new QLabel(verticalLayoutWidget);
        numCompteLabel->setObjectName(QString::fromUtf8("numCompteLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, numCompteLabel);

        m_compte = new QLineEdit(verticalLayoutWidget);
        m_compte->setObjectName(QString::fromUtf8("m_compte"));

        formLayout->setWidget(2, QFormLayout::FieldRole, m_compte);

        soldeLabel = new QLabel(verticalLayoutWidget);
        soldeLabel->setObjectName(QString::fromUtf8("soldeLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, soldeLabel);

        m_solde = new QLineEdit(verticalLayoutWidget);
        m_solde->setObjectName(QString::fromUtf8("m_solde"));

        formLayout->setWidget(4, QFormLayout::FieldRole, m_solde);

        verticalSpacer = new QSpacerItem(191, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer);


        verticalLayout->addLayout(formLayout);

        m_ajouter = new QPushButton(AddClient);
        m_ajouter->setObjectName(QString::fromUtf8("m_ajouter"));
        m_ajouter->setGeometry(QRect(20, 190, 261, 31));

        retranslateUi(AddClient);

        QMetaObject::connectSlotsByName(AddClient);
    } // setupUi

    void retranslateUi(QDialog *AddClient)
    {
        AddClient->setWindowTitle(QCoreApplication::translate("AddClient", "Dialog", nullptr));
        clientLabel->setText(QCoreApplication::translate("AddClient", "Client: ", nullptr));
        numCompteLabel->setText(QCoreApplication::translate("AddClient", "N\302\260 compte: ", nullptr));
        soldeLabel->setText(QCoreApplication::translate("AddClient", "Solde:", nullptr));
        m_ajouter->setText(QCoreApplication::translate("AddClient", "Sauvegarder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddClient: public Ui_AddClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENT_H
