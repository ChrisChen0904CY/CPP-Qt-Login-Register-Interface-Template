/********************************************************************************
** Form generated from reading UI file 'registerpage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERPAGE_H
#define UI_REGISTERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterPage
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_20;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_15;
    QCheckBox *checkBox;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *RegisterPage)
    {
        if (RegisterPage->objectName().isEmpty())
            RegisterPage->setObjectName("RegisterPage");
        RegisterPage->resize(360, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RegisterPage->sizePolicy().hasHeightForWidth());
        RegisterPage->setSizePolicy(sizePolicy);
        RegisterPage->setMinimumSize(QSize(360, 480));
        RegisterPage->setMaximumSize(QSize(360, 480));
        RegisterPage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout = new QHBoxLayout(RegisterPage);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        label_5 = new QLabel(RegisterPage);
        label_5->setObjectName("label_5");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label = new QLabel(RegisterPage);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(RegisterPage);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {border-radius:14px;\n"
"					padding: 2 30 2 10;\n"
"        			border-width: 1px;\n"
"        			border-style: solid;\n"
"       				border-color: black;\n"
"}"));
        lineEdit->setMaxLength(30);

        horizontalLayout_2->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 10);
        horizontalLayout_2->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label_2 = new QLabel(RegisterPage);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        lineEdit_2 = new QLineEdit(RegisterPage);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(0, 30));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {border-radius:14px;\n"
"					padding: 2 10 2 16;\n"
"        			border-width: 1px;\n"
"        			border-style: solid;\n"
"       				border-color: black;\n"
"}"));
        lineEdit_2->setMaxLength(30);
        lineEdit_2->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_3->addWidget(lineEdit_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 5);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(3, 10);
        horizontalLayout_3->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        label_3 = new QLabel(RegisterPage);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        lineEdit_3 = new QLineEdit(RegisterPage);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMinimumSize(QSize(0, 30));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {border-radius:14px;\n"
"					padding: 2 10 2 16;\n"
"        			border-width: 1px;\n"
"        			border-style: solid;\n"
"       				border-color: black;\n"
"}"));
        lineEdit_3->setMaxLength(30);
        lineEdit_3->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lineEdit_3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 5);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 10);
        horizontalLayout_4->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_14);

        label_4 = new QLabel(RegisterPage);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);

        lineEdit_4 = new QLineEdit(RegisterPage);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setMinimumSize(QSize(0, 30));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {border-radius:14px;\n"
"					padding: 2 30 2 10;\n"
"        			border-width: 1px;\n"
"        			border-style: solid;\n"
"       				border-color: black;\n"
"}"));

        horizontalLayout_5->addWidget(lineEdit_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 5);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 10);
        horizontalLayout_5->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_18);

        label_7 = new QLabel(RegisterPage);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(100, 0));
        label_7->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(label_7);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_20);

        checkBox_2 = new QCheckBox(RegisterPage);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setChecked(true);
        checkBox_2->setAutoExclusive(true);

        horizontalLayout_8->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(RegisterPage);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setAutoExclusive(true);

        horizontalLayout_8->addWidget(checkBox_3);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 5);
        horizontalLayout_8->setStretch(2, 1);
        horizontalLayout_8->setStretch(3, 5);
        horizontalLayout_8->setStretch(4, 5);
        horizontalLayout_8->setStretch(5, 1);

        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_15);

        checkBox = new QCheckBox(RegisterPage);
        checkBox->setObjectName("checkBox");
        checkBox->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    border: 1px solid black;\n"
"    width: 14px;\n"
"    height: 14px;\n"
"    border-radius: 8px;\n"
"    background-color: white; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262 */\n"
"};\n"
""));

        horizontalLayout_6->addWidget(checkBox);

        label_6 = new QLabel(RegisterPage);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 20);
        horizontalLayout_6->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);

        pushButton = new QPushButton(RegisterPage);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(100, 40));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {border-radius:18px;\n"
"        				  border-width: 1px;\n"
"        				  border-style: solid;\n"
"       					  border-color: black;\n"
"}"));

        horizontalLayout_7->addWidget(pushButton);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 6);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 3);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 3);
        verticalLayout->setStretch(6, 1);
        verticalLayout->setStretch(7, 3);
        verticalLayout->setStretch(8, 1);
        verticalLayout->setStretch(9, 3);
        verticalLayout->setStretch(10, 1);
        verticalLayout->setStretch(11, 2);
        verticalLayout->setStretch(12, 1);
        verticalLayout->setStretch(13, 2);
        verticalLayout->setStretch(14, 3);
        verticalLayout->setStretch(15, 2);
        verticalLayout->setStretch(16, 6);

        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(RegisterPage);

        QMetaObject::connectSlotsByName(RegisterPage);
    } // setupUi

    void retranslateUi(QWidget *RegisterPage)
    {
        RegisterPage->setWindowTitle(QCoreApplication::translate("RegisterPage", "\346\263\250\345\206\214\351\241\265\351\235\242", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterPage", "\346\226\260\350\264\246\345\217\267\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("RegisterPage", "\350\264\246\345\217\267: ", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterPage", "\345\257\206\347\240\201: ", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterPage", "\345\206\215\346\254\241\347\241\256\350\256\244\345\257\206\347\240\201: ", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterPage", "\344\272\272\346\234\272\351\252\214\350\257\201: ", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterPage", "\346\263\250\345\206\214\347\261\273\345\236\213: ", nullptr));
        checkBox_2->setText(QCoreApplication::translate("RegisterPage", "\346\231\256\351\200\232\347\224\250\346\210\267", nullptr));
        checkBox_3->setText(QCoreApplication::translate("RegisterPage", "\347\256\241\347\220\206\345\221\230", nullptr));
        checkBox->setText(QString());
        label_6->setText(QString());
        pushButton->setText(QCoreApplication::translate("RegisterPage", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterPage: public Ui_RegisterPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPAGE_H
