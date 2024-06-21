/********************************************************************************
** Form generated from reading UI file 'welcomepage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEPAGE_H
#define UI_WELCOMEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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

class Ui_WelcomePage
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_2;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WelcomePage)
    {
        if (WelcomePage->objectName().isEmpty())
            WelcomePage->setObjectName("WelcomePage");
        WelcomePage->resize(720, 480);
        WelcomePage->setMinimumSize(QSize(720, 480));
        WelcomePage->setMaximumSize(QSize(720, 480));
        WelcomePage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_2 = new QHBoxLayout(WelcomePage);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(WelcomePage);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label = new QLabel(WelcomePage);
        label->setObjectName("label");
        label->setMinimumSize(QSize(64, 64));
        label->setMaximumSize(QSize(64, 64));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 12pt \"Microsoft YaHei UI\";\n"
"}"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        lineEdit = new QLineEdit(WelcomePage);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 50));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {background-image: url(:/resources/Line_Account.png);\n"
"					background-repeat: no-repeat;\n"
"					background-position: left;\n"
"					padding: 2 10 2 30;\n"
"  					border-radius:20px;\n"
"        			border-width: 1px;\n"
"        			border-style: solid;\n"
"       				border-color: black;}"));
        lineEdit->setMaxLength(30);

        horizontalLayout->addWidget(lineEdit);

        pushButton_3 = new QPushButton(WelcomePage);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setEnabled(false);
        pushButton_3->setMinimumSize(QSize(64, 64));
        pushButton_3->setMaximumSize(QSize(64, 64));
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 0, 0, 0); /* \345\256\214\345\205\250\351\200\217\346\230\216 */\n"
"    border: none; /* \345\216\273\346\216\211\350\276\271\346\241\206 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 10);
        horizontalLayout->setStretch(4, 2);
        horizontalLayout->setStretch(5, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        label_2 = new QLabel(WelcomePage);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(64, 64));
        label_2->setMaximumSize(QSize(64, 64));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 12pt \"Microsoft YaHei UI\";\n"
"}"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        lineEdit_2 = new QLineEdit(WelcomePage);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(0, 50));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {background-image: url(:/resources/Line_Password.png);\n"
"					background-repeat: no-repeat;\n"
"					background-position: left;\n"
"					padding: 2 10 2 30;\n"
"  					border-radius:20px;\n"
"        			border-width: 1px;\n"
"        			border-style: solid;\n"
"       				border-color: black;}"));
        lineEdit_2->setMaxLength(30);
        lineEdit_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(WelcomePage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(64, 64));
        pushButton_2->setMaximumSize(QSize(64, 64));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 0, 0, 0); /* \345\256\214\345\205\250\351\200\217\346\230\216 */\n"
"    border: none; /* \345\216\273\346\216\211\350\276\271\346\241\206 */\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/Unseen.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/resources/Seen.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(64, 64));

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(3, 10);
        horizontalLayout_3->setStretch(4, 2);
        horizontalLayout_3->setStretch(5, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        checkBox_2 = new QCheckBox(WelcomePage);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setChecked(true);
        checkBox_2->setAutoExclusive(true);

        horizontalLayout_4->addWidget(checkBox_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        checkBox = new QCheckBox(WelcomePage);
        checkBox->setObjectName("checkBox");
        checkBox->setAutoExclusive(true);

        horizontalLayout_4->addWidget(checkBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_5 = new QPushButton(WelcomePage);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(0, 40));
        pushButton_5->setMaximumSize(QSize(200, 16777215));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius:20px;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"}"));
        pushButton_5->setIconSize(QSize(20, 40));

        horizontalLayout_5->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        pushButton = new QPushButton(WelcomePage);
        pushButton->setObjectName("pushButton");
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(0, 0, 0, 0); /* \345\256\214\345\205\250\351\200\217\346\230\216 */\n"
"    border: none; /* \345\216\273\346\216\211\350\276\271\346\241\206 */\n"
"    color: black; /* \351\273\230\350\256\244\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"	font: 10pt \"Microsoft YaHei UI\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: blue; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262\345\217\230\344\270\272\350\223\235\350\211\262 */\n"
"    text-decoration: underline; /* \346\202\254\345\201\234\346\227\266\346\226\207\345\255\227\345\212\240\344\270\213\345\210\222\347\272\277 */\n"
"}\n"
""));
        pushButton->setIconSize(QSize(64, 64));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(1, 5);
        verticalLayout->setStretch(2, 6);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 6);
        verticalLayout->setStretch(5, 1);
        verticalLayout->setStretch(6, 3);
        verticalLayout->setStretch(7, 2);
        verticalLayout->setStretch(8, 5);
        verticalLayout->setStretch(9, 5);
        verticalLayout->setStretch(10, 3);
        verticalLayout->setStretch(11, 1);

        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(WelcomePage);

        QMetaObject::connectSlotsByName(WelcomePage);
    } // setupUi

    void retranslateUi(QWidget *WelcomePage)
    {
        WelcomePage->setWindowTitle(QCoreApplication::translate("WelcomePage", "\347\231\273\345\275\225\351\241\265\351\235\242", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("WelcomePage", "\350\264\246\345\217\267: ", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("WelcomePage", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        pushButton_3->setText(QString());
        label_2->setText(QCoreApplication::translate("WelcomePage", "\345\257\206\347\240\201: ", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("WelcomePage", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton_2->setText(QString());
        checkBox_2->setText(QCoreApplication::translate("WelcomePage", "\346\231\256\351\200\232\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        checkBox->setText(QCoreApplication::translate("WelcomePage", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        pushButton_5->setText(QCoreApplication::translate("WelcomePage", "\347\231\273\345\275\225", nullptr));
        pushButton->setText(QCoreApplication::translate("WelcomePage", "\350\277\230\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237\347\202\271\346\210\221\346\263\250\345\206\214\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomePage: public Ui_WelcomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEPAGE_H
