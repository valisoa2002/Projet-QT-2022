/********************************************************************************
** Form generated from reading UI file 'deleteclient.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECLIENT_H
#define UI_DELETECLIENT_H

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

class Ui_DeleteClient
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nCompteLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *m_compteDeleted;
    QPushButton *m_deleteClient;

    void setupUi(QDialog *DeleteClient)
    {
        if (DeleteClient->objectName().isEmpty())
            DeleteClient->setObjectName(QString::fromUtf8("DeleteClient"));
        DeleteClient->resize(310, 119);
        verticalLayoutWidget = new QWidget(DeleteClient);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 281, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        nCompteLabel = new QLabel(verticalLayoutWidget);
        nCompteLabel->setObjectName(QString::fromUtf8("nCompteLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nCompteLabel);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::LabelRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::LabelRole, verticalSpacer_2);

        m_compteDeleted = new QLineEdit(verticalLayoutWidget);
        m_compteDeleted->setObjectName(QString::fromUtf8("m_compteDeleted"));

        formLayout->setWidget(1, QFormLayout::FieldRole, m_compteDeleted);


        verticalLayout->addLayout(formLayout);

        m_deleteClient = new QPushButton(DeleteClient);
        m_deleteClient->setObjectName(QString::fromUtf8("m_deleteClient"));
        m_deleteClient->setGeometry(QRect(100, 80, 111, 31));

        retranslateUi(DeleteClient);

        QMetaObject::connectSlotsByName(DeleteClient);
    } // setupUi

    void retranslateUi(QDialog *DeleteClient)
    {
        DeleteClient->setWindowTitle(QCoreApplication::translate("DeleteClient", "Dialog", nullptr));
        nCompteLabel->setText(QCoreApplication::translate("DeleteClient", "N\302\260 compte: ", nullptr));
        m_deleteClient->setText(QCoreApplication::translate("DeleteClient", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteClient: public Ui_DeleteClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECLIENT_H
