/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(404, 253);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMaximumSize(QSize(404, 253));
        AboutDialog->setSizeGripEnabled(false);
        gridLayout = new QGridLayout(AboutDialog);
        gridLayout->setObjectName("gridLayout");
        label_5 = new QLabel(AboutDialog);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/images/notebook.png);"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(AboutDialog);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 2, 0, 1, 2);

        label = new QLabel(AboutDialog);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 2);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 2, 2, 1, 1);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "\345\205\263\344\272\216", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("AboutDialog", "V1.0 build 20251108", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "\345\260\217\346\226\271\346\226\207\346\234\254\347\274\226\350\276\221\345\231\250", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "\345\274\200\345\217\221\350\200\205\357\274\232\346\226\271\345\206\260\347\216\211", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "email\357\274\2323273352120@qq.com", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "\345\255\246\345\217\267\357\274\2322023414290410", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
