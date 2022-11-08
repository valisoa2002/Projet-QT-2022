/********************************************************************************
** Form generated from reading UI file 'updateclient.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATECLIENT_H
#define UI_UPDATECLIENT_H

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

class Ui_UpdateClient
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *ancientClientLabel;
    QLineEdit *m_lastClient;
    QSpacerItem *verticalSpacer;
    QLabel *nouveauClientLabel;
    QLineEdit *m_clientUpdated;
    QSpacerItem *verticalSpacer_2;
    QLabel *numCompteLabel;
    QSpacerItem *verticalSpacer_3;
    QLabel *soldeLabel;
    QLineEdit *m_soldeUpdated;
    QLineEdit *m_compteUpdated;
    QPushButton *m_modifier;

    void setupUi(QDialog *UpdateClient)
    {
        if (UpdateClient->objectName().isEmpty())
            UpdateClient->setObjectName(QString::fromUtf8("UpdateClient"));
        UpdateClient->resize(301, 240);
        verticalLayoutWidget = new QWidget(UpdateClient);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 281, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        ancientClientLabel = new QLabel(verticalLayoutWidget);
        ancientClientLabel->setObjectName(QString::fromUtf8("ancientClientLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ancientClientLabel);

        m_lastClient = new QLineEdit(verticalLayoutWidget);
        m_lastClient->setObjectName(QString::fromUtf8("m_lastClient"));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_lastClient);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        nouveauClientLabel = new QLabel(verticalLayoutWidget);
        nouveauClientLabel->setObjectName(QString::fromUtf8("nouveauClientLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, nouveauClientLabel);

        m_clientUpdated = new QLineEdit(verticalLayoutWidget);
        m_clientUpdated->setObjectName(QString::fromUtf8("m_clientUpdated"));

        formLayout->setWidget(2, QFormLayout::FieldRole, m_clientUpdated);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer_2);

        numCompteLabel = new QLabel(verticalLayoutWidget);
        numCompteLabel->setObjectName(QString::fromUtf8("numCompteLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, numCompteLabel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_3);

        soldeLabel = new QLabel(verticalLayoutWidget);
        soldeLabel->setObjectName(QString::fromUtf8("soldeLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, soldeLabel);

        m_soldeUpdated = new QLineEdit(verticalLayoutWidget);
        m_soldeUpdated->setObjectName(QString::fromUtf8("m_soldeUpdated"));

        formLayout->setWidget(6, QFormLayout::FieldRole, m_soldeUpdated);

        m_compteUpdated = new QLineEdit(verticalLayoutWidget);
        m_compteUpdated->setObjectName(QString::fromUtf8("m_compteUpdated"));

        formLayout->setWidget(4, QFormLayout::FieldRole, m_compteUpdated);


        verticalLayout->addLayout(formLayout);

        m_modifier = new QPushButton(UpdateClient);
        m_modifier->setObjectName(QString::fromUtf8("m_modifier"));
        m_modifier->setGeometry(QRect(10, 200, 281, 31));

        retranslateUi(UpdateClient);

        QMetaObject::connectSlotsByName(UpdateClient);
    } // setupUi

    void retranslateUi(QDialog *UpdateClient)
    {
        UpdateClient->setWindowTitle(QCoreApplication::translate("UpdateClient", "Dialog", nullptr));
        ancientClientLabel->setText(QCoreApplication::translate("UpdateClient", "Ancient Client: ", nullptr));
        nouveauClientLabel->setText(QCoreApplication::translate("UpdateClient", "Nouveau Client:  ", nullptr));
        numCompteLabel->setText(QCoreApplication::translate("UpdateClient", "N\302\260 compte: ", nullptr));
        soldeLabel->setText(QCoreApplication::translate("UpdateClient", "Solde(en Ariary): ", nullptr));
        m_modifier->setText(QCoreApplication::translate("UpdateClient", "Sauvegarder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateClient: public Ui_UpdateClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATECLIENT_H
