/********************************************************************************
** Form generated from reading UI file 'selfinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELFINFOWIDGET_H
#define UI_SELFINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelfInfoWidget
{
public:
    QLabel *label;
    QPushButton *pushBtn_close;

    void setupUi(QWidget *SelfInfoWidget)
    {
        if (SelfInfoWidget->objectName().isEmpty())
            SelfInfoWidget->setObjectName("SelfInfoWidget");
        SelfInfoWidget->resize(953, 675);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/\344\270\252\344\272\272\344\270\255\345\277\203\347\273\277.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelfInfoWidget->setWindowIcon(icon);
        label = new QLabel(SelfInfoWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(8, 18, 941, 521));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/src/beijing.png")));
        label->setScaledContents(true);
        pushBtn_close = new QPushButton(SelfInfoWidget);
        pushBtn_close->setObjectName("pushBtn_close");
        pushBtn_close->setGeometry(QRect(900, 20, 34, 40));
        pushBtn_close->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/src/close.png); /* \346\234\200\345\260\217\345\214\226 */\n"
"	min-width: 34px;\n"
"	max-width: 34px;\n"
"	min-height: 40px;\n"
"	max-height: 40px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #f57575; \n"
"}\n"
"background-color: rgba(255, 255, 255, 0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pic/src/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushBtn_close->setIcon(icon1);
        pushBtn_close->setIconSize(QSize(40, 40));

        retranslateUi(SelfInfoWidget);

        QMetaObject::connectSlotsByName(SelfInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *SelfInfoWidget)
    {
        SelfInfoWidget->setWindowTitle(QCoreApplication::translate("SelfInfoWidget", "\346\210\221\347\232\204\350\265\204\346\226\231", nullptr));
        label->setText(QString());
        pushBtn_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SelfInfoWidget: public Ui_SelfInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELFINFOWIDGET_H
