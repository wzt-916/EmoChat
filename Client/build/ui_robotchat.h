/********************************************************************************
** Form generated from reading UI file 'robotchat.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTCHAT_H
#define UI_ROBOTCHAT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RobotChat
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *RobotChat)
    {
        if (RobotChat->objectName().isEmpty())
            RobotChat->setObjectName("RobotChat");
        RobotChat->resize(586, 377);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/src/emochat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        RobotChat->setWindowIcon(icon);
        textEdit = new QTextEdit(RobotChat);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 250, 591, 91));
        pushButton = new QPushButton(RobotChat);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(490, 350, 75, 23));
        textBrowser = new QTextBrowser(RobotChat);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 0, 591, 241));

        retranslateUi(RobotChat);

        QMetaObject::connectSlotsByName(RobotChat);
    } // setupUi

    void retranslateUi(QWidget *RobotChat)
    {
        RobotChat->setWindowTitle(QCoreApplication::translate("RobotChat", "\345\260\217\344\271\220\345\220\214\345\255\246", nullptr));
        pushButton->setText(QCoreApplication::translate("RobotChat", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RobotChat: public Ui_RobotChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTCHAT_H
