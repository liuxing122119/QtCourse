/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *searchText;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbCaseSensetive;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbUp;
    QRadioButton *rbDown;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btFindNext;
    QSpacerItem *verticalSpacer;
    QPushButton *btCancel;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName("SearchDialog");
        SearchDialog->resize(430, 130);
        SearchDialog->setMaximumSize(QSize(430, 130));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Find.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SearchDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(SearchDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(SearchDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        searchText = new QLineEdit(SearchDialog);
        searchText->setObjectName("searchText");

        horizontalLayout->addWidget(searchText);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        cbCaseSensetive = new QCheckBox(SearchDialog);
        cbCaseSensetive->setObjectName("cbCaseSensetive");

        horizontalLayout_3->addWidget(cbCaseSensetive);

        groupBox = new QGroupBox(SearchDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        rbUp = new QRadioButton(groupBox);
        rbUp->setObjectName("rbUp");

        horizontalLayout_2->addWidget(rbUp);

        rbDown = new QRadioButton(groupBox);
        rbDown->setObjectName("rbDown");

        horizontalLayout_2->addWidget(rbDown);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(groupBox);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        btFindNext = new QPushButton(SearchDialog);
        btFindNext->setObjectName("btFindNext");

        verticalLayout_2->addWidget(btFindNext);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btCancel = new QPushButton(SearchDialog);
        btCancel->setObjectName("btCancel");

        verticalLayout_2->addWidget(btCancel);


        horizontalLayout_4->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        retranslateUi(SearchDialog);

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QCoreApplication::translate("SearchDialog", "\346\237\245\346\211\276", nullptr));
        label->setText(QCoreApplication::translate("SearchDialog", "\346\237\245\346\211\276\347\233\256\346\240\207\357\274\232", nullptr));
        cbCaseSensetive->setText(QCoreApplication::translate("SearchDialog", "\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SearchDialog", "\346\226\271\345\220\221", nullptr));
        rbUp->setText(QCoreApplication::translate("SearchDialog", "\345\220\221\344\270\212(&U)", nullptr));
        rbDown->setText(QCoreApplication::translate("SearchDialog", "\345\220\221\344\270\213(&D)", nullptr));
        btFindNext->setText(QCoreApplication::translate("SearchDialog", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252(&F)", nullptr));
        btCancel->setText(QCoreApplication::translate("SearchDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
