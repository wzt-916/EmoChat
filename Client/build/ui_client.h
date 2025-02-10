/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include <friendiconlabel.h>
#include <sendtextedit.h>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QWidget *centerWidget;
    QGridLayout *gridLayout_4;
    QWidget *widget_main;
    QWidget *widget_side;
    QPushButton *pushButton_msg_list;
    QPushButton *pushBtn_refresh;
    QPushButton *pushButton_emoj_3;
    QPushButton *pushButton_friend_list;
    QPushButton *pushButton_group_list;
    QPushButton *pushButton_system_msg;
    FriendIconLabel *label_icon;
    QPushButton *pushButton_icon;
    QPushButton *pushButton_robot;
    QWidget *widget_list;
    QGridLayout *gridLayout_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_addFriend;
    QStackedWidget *stackedWidget_list;
    QWidget *page_5;
    QWidget *page_6;
    QWidget *widget_chatting;
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushBtn_send;
    QWidget *widget_chatWindow;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_6;
    QPushButton *pushBtn_hide;
    QPushButton *pushBtn_max;
    QPushButton *pushBtn_close;
    QWidget *widget_7;
    QGridLayout *gridLayout_7;
    QLabel *label_info;
    QWidget *widget_8;
    QWidget *widget_16;
    QWidget *widget_15;
    QPushButton *pushButton;
    QWidget *widget_send;
    QGridLayout *gridLayout_14;
    QWidget *widget_4;
    QPushButton *pushButton_emoj;
    QPushButton *pushButton_screenshot;
    QPushButton *pushButton_chat;
    QPushButton *pushButton_file;
    QPushButton *pushButton_image;
    SendTextEdit *textEdit_send;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName("Client");
        Client->resize(933, 657);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/src/wechat2.png"), QSize(), QIcon::Normal, QIcon::Off);
        Client->setWindowIcon(icon);
        Client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centerWidget = new QWidget(Client);
        centerWidget->setObjectName("centerWidget");
        centerWidget->setGeometry(QRect(0, 0, 933, 657));
        gridLayout_4 = new QGridLayout(centerWidget);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_main = new QWidget(centerWidget);
        widget_main->setObjectName("widget_main");
        widget_side = new QWidget(widget_main);
        widget_side->setObjectName("widget_side");
        widget_side->setGeometry(QRect(-2, 10, 80, 657));
        widget_side->setMinimumSize(QSize(80, 0));
        widget_side->setMaximumSize(QSize(80, 16777215));
        widget_side->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"min-width:80;\n"
"max-width:80;"));
        pushButton_msg_list = new QPushButton(widget_side);
        pushButton_msg_list->setObjectName("pushButton_msg_list");
        pushButton_msg_list->setGeometry(QRect(20, 180, 40, 40));
        pushButton_msg_list->setMinimumSize(QSize(40, 0));
        pushButton_msg_list->setMaximumSize(QSize(40, 16777215));
        pushButton_msg_list->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_msg_list->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	border: none; /* no border for a flat push button */\n"
"	max-width:40;\n"
"	min-width:40;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/src/message.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/src/message1.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_msg_list->setIcon(icon1);
        pushButton_msg_list->setIconSize(QSize(40, 40));
        pushButton_msg_list->setCheckable(true);
        pushButton_msg_list->setChecked(false);
        pushBtn_refresh = new QPushButton(widget_side);
        pushBtn_refresh->setObjectName("pushBtn_refresh");
        pushBtn_refresh->setGeometry(QRect(20, 610, 42, 40));
        pushBtn_refresh->setMinimumSize(QSize(42, 0));
        pushBtn_refresh->setMaximumSize(QSize(42, 2000));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(10);
        pushBtn_refresh->setFont(font);
        pushBtn_refresh->setCursor(QCursor(Qt::ArrowCursor));
        pushBtn_refresh->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(96,96,96);\n"
"	border-radius: 5px;	\n"
"	border-style: solid;\n"
"	background-color: rgb(245,245,245);\n"
"\n"
"	border-right:1px solid #E5E5E5;\n"
"	border-top:1px solid #E5E5E5;\n"
"	border-left:1px solid #E5E5E5;\n"
"	border-bottom:1px solid #E5E5E5;\n"
"\n"
"	max-width:40;\n"
"	min-width:40;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(18,150,17);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(7,193,96);\n"
"}"));
        pushButton_emoj_3 = new QPushButton(widget_side);
        pushButton_emoj_3->setObjectName("pushButton_emoj_3");
        pushButton_emoj_3->setGeometry(QRect(20, 110, 40, 40));
        pushButton_emoj_3->setMinimumSize(QSize(40, 0));
        pushButton_emoj_3->setMaximumSize(QSize(40, 16777215));
        pushButton_emoj_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_emoj_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/src/SelfCenter1.png); \n"
"	max-width:40;\n"
"	min-width:40;\n"
"}\n"
"QPushButton::hover {\n"
"	image: url(:/src/SelfCenter2.png); \n"
"}\n"
"\n"
"\n"
""));
        pushButton_emoj_3->setCheckable(false);
        pushButton_emoj_3->setChecked(false);
        pushButton_friend_list = new QPushButton(widget_side);
        pushButton_friend_list->setObjectName("pushButton_friend_list");
        pushButton_friend_list->setGeometry(QRect(20, 250, 40, 40));
        pushButton_friend_list->setMinimumSize(QSize(40, 0));
        pushButton_friend_list->setMaximumSize(QSize(40, 16777215));
        pushButton_friend_list->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_friend_list->setMouseTracking(false);
        pushButton_friend_list->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	border: none; /* no border for a flat push button */\n"
"	max-width:40;\n"
"	min-width:40;\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/src/friend.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/src/friend1.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_friend_list->setIcon(icon2);
        pushButton_friend_list->setIconSize(QSize(40, 40));
        pushButton_friend_list->setCheckable(true);
        pushButton_friend_list->setChecked(false);
        pushButton_group_list = new QPushButton(widget_side);
        pushButton_group_list->setObjectName("pushButton_group_list");
        pushButton_group_list->setGeometry(QRect(20, 320, 40, 40));
        pushButton_group_list->setMinimumSize(QSize(40, 0));
        pushButton_group_list->setMaximumSize(QSize(40, 16777215));
        pushButton_group_list->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_group_list->setStyleSheet(QString::fromUtf8("border:none;\n"
"	max-width:40;\n"
"	min-width:40;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/src/group.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/src/group1.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_group_list->setIcon(icon3);
        pushButton_group_list->setIconSize(QSize(40, 40));
        pushButton_group_list->setCheckable(true);
        pushButton_group_list->setChecked(false);
        pushButton_system_msg = new QPushButton(widget_side);
        pushButton_system_msg->setObjectName("pushButton_system_msg");
        pushButton_system_msg->setGeometry(QRect(20, 390, 40, 40));
        pushButton_system_msg->setMinimumSize(QSize(40, 0));
        pushButton_system_msg->setMaximumSize(QSize(40, 16777215));
        pushButton_system_msg->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_system_msg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	border: none; /* no border for a flat push button */\n"
"	max-width:40;\n"
"	min-width:40;\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/src/notification.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_system_msg->setIcon(icon4);
        pushButton_system_msg->setIconSize(QSize(40, 40));
        pushButton_system_msg->setCheckable(false);
        pushButton_system_msg->setChecked(false);
        label_icon = new FriendIconLabel(widget_side);
        label_icon->setObjectName("label_icon");
        label_icon->setGeometry(QRect(0, 0, 80, 80));
        label_icon->setMinimumSize(QSize(80, 80));
        label_icon->setMaximumSize(QSize(80, 80));
        label_icon->setStyleSheet(QString::fromUtf8("	max-width:80;\n"
"	min-width:80;\n"
"background-color:transparent;"));
        label_icon->setScaledContents(true);
        pushButton_icon = new QPushButton(widget_side);
        pushButton_icon->setObjectName("pushButton_icon");
        pushButton_icon->setGeometry(QRect(0, 0, 80, 80));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_icon->sizePolicy().hasHeightForWidth());
        pushButton_icon->setSizePolicy(sizePolicy);
        pushButton_icon->setMinimumSize(QSize(80, 80));
        pushButton_icon->setMaximumSize(QSize(80, 80));
        QFont font1;
        font1.setPointSize(9);
        pushButton_icon->setFont(font1);
        pushButton_icon->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_icon->setStyleSheet(QString::fromUtf8("max-width:80;\n"
"min-width:80;\n"
"border:none;\n"
"background-color:transparent;"));
        pushButton_robot = new QPushButton(widget_side);
        pushButton_robot->setObjectName("pushButton_robot");
        pushButton_robot->setGeometry(QRect(20, 450, 40, 41));
        pushButton_robot->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_robot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	border: none; /* no border for a flat push button */\n"
"	max-width:40;\n"
"	min-width:40;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pic/src/robot.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/pic/src/robot.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_robot->setIcon(icon5);
        pushButton_robot->setIconSize(QSize(40, 40));
        widget_list = new QWidget(widget_main);
        widget_list->setObjectName("widget_list");
        widget_list->setGeometry(QRect(78, 10, 202, 81));
        gridLayout_2 = new QGridLayout(widget_list);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_6 = new QWidget(widget_list);
        widget_6->setObjectName("widget_6");
        widget_6->setMinimumSize(QSize(200, 60));
        widget_6->setMaximumSize(QSize(999999, 999999));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(247,247,247);\n"
"border-right:1px solid #D6D6D6;"));
        horizontalLayout = new QHBoxLayout(widget_6);
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(widget_6);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMaximumSize(QSize(16777215, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color: rgb(226,226,226);\n"
"	border: none; /* no border for a flat push button */\n"
"}\n"
"QLineEdit\n"
"{\n"
"	background-color: rgb(226,226,226);\n"
"	border: none; /* no border for a flat push button */\n"
"}\n"
""));

        horizontalLayout->addWidget(lineEdit);

        pushButton_addFriend = new QPushButton(widget_6);
        pushButton_addFriend->setObjectName("pushButton_addFriend");
        pushButton_addFriend->setMinimumSize(QSize(20, 20));
        pushButton_addFriend->setMaximumSize(QSize(20, 20));
        pushButton_addFriend->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/pic/src/tianjia.png); \n"
"	background-color: rgb(226,226,226);\n"
"	min-width: 20px;\n"
"	max-width: 20px;\n"
"	min-height: 20px;\n"
"	max-height: 20px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: rgb(209,209,209);\n"
"	image: url(:/pic/src/tianjia2.png); \n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/pic/src/tianjia.png); \n"
"}"));

        horizontalLayout->addWidget(pushButton_addFriend);


        gridLayout_2->addWidget(widget_6, 1, 0, 1, 1);

        stackedWidget_list = new QStackedWidget(widget_list);
        stackedWidget_list->setObjectName("stackedWidget_list");
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        stackedWidget_list->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        stackedWidget_list->addWidget(page_6);

        gridLayout_2->addWidget(stackedWidget_list, 2, 0, 1, 1);

        widget_chatting = new QWidget(widget_main);
        widget_chatting->setObjectName("widget_chatting");
        widget_chatting->setGeometry(QRect(330, 10, 601, 657));
        gridLayout = new QGridLayout(widget_chatting);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        widget_3 = new QWidget(widget_chatting);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 35));
        widget_3->setMaximumSize(QSize(16777215, 35));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout_10 = new QGridLayout(widget_3);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushBtn_send = new QPushButton(widget_3);
        pushBtn_send->setObjectName("pushBtn_send");
        pushBtn_send->setMinimumSize(QSize(70, 25));
        pushBtn_send->setMaximumSize(QSize(70, 25));
        pushBtn_send->setFont(font);
        pushBtn_send->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(96,96,96);\n"
"	border-radius: 5px;	\n"
"	border-style: solid;\n"
"	background-color: rgb(245,245,245);\n"
"\n"
"	border-right:1px solid #E5E5E5;\n"
"	border-top:1px solid #E5E5E5;\n"
"	border-left:1px solid #E5E5E5;\n"
"	border-bottom:1px solid #E5E5E5;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(18,150,17);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(7,193,96);\n"
"}"));

        gridLayout_10->addWidget(pushBtn_send, 0, 2, 1, 1);


        gridLayout->addWidget(widget_3, 4, 0, 1, 1);

        widget_chatWindow = new QWidget(widget_chatting);
        widget_chatWindow->setObjectName("widget_chatWindow");
        widget_chatWindow->setLayoutDirection(Qt::LeftToRight);
        widget_chatWindow->setAutoFillBackground(false);
        widget_chatWindow->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(widget_chatWindow);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(widget_chatWindow);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(199, 200, 194);"));
        stackedWidget->setFrameShadow(QFrame::Plain);
        stackedWidget->setLineWidth(10);
        page = new QWidget();
        page->setObjectName("page");
        page->setAutoFillBackground(false);
        page->setStyleSheet(QString::fromUtf8("image: url(:/src/chatbg.png);\n"
"background-color:#F5F5F5;"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout->addWidget(widget_chatWindow, 1, 0, 1, 1);

        widget_2 = new QWidget(widget_chatting);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(0, 0));
        widget_2->setMaximumSize(QSize(16777215, 16777215));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(245,245,245);"));
        gridLayout_8 = new QGridLayout(widget_2);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName("gridLayout_6");
        pushBtn_hide = new QPushButton(widget_2);
        pushBtn_hide->setObjectName("pushBtn_hide");
        pushBtn_hide->setMinimumSize(QSize(30, 25));
        pushBtn_hide->setMaximumSize(QSize(30, 25));
        pushBtn_hide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/pic/src/min.png); /* \346\234\200\345\260\217\345\214\226 */\n"
"	min-width: 30px;\n"
"	max-width: 30px;\n"
"	min-height: 25px;\n"
"	max-height: 25px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: rgba(166,166,166, 50); \n"
"}"));

        gridLayout_6->addWidget(pushBtn_hide, 0, 1, 1, 1);

        pushBtn_max = new QPushButton(widget_2);
        pushBtn_max->setObjectName("pushBtn_max");
        pushBtn_max->setMinimumSize(QSize(30, 25));
        pushBtn_max->setMaximumSize(QSize(30, 25));
        pushBtn_max->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/pic/src/max.png); /* \346\234\200\345\260\217\345\214\226 */\n"
"	min-width: 30px;\n"
"	max-width: 30px;\n"
"	min-height: 25px;\n"
"	max-height: 25px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: rgba(166,166,166, 50); \n"
"}"));

        gridLayout_6->addWidget(pushBtn_max, 0, 2, 1, 1);

        pushBtn_close = new QPushButton(widget_2);
        pushBtn_close->setObjectName("pushBtn_close");
        pushBtn_close->setMinimumSize(QSize(30, 25));
        pushBtn_close->setMaximumSize(QSize(30, 25));
        pushBtn_close->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/pic/src/close.png); /* \346\234\200\345\260\217\345\214\226 */\n"
"	min-width: 30px;\n"
"	max-width: 30px;\n"
"	min-height: 25px;\n"
"	max-height: 25px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #f57575; \n"
"}"));

        gridLayout_6->addWidget(pushBtn_close, 0, 3, 1, 1);

        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName("widget_7");

        gridLayout_6->addWidget(widget_7, 0, 0, 1, 1);

        gridLayout_6->setColumnStretch(0, 1);

        gridLayout_8->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        label_info = new QLabel(widget_2);
        label_info->setObjectName("label_info");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\226\260\345\256\213\344\275\223")});
        font2.setPointSize(14);
        label_info->setFont(font2);

        gridLayout_7->addWidget(label_info, 0, 1, 1, 1);

        widget_8 = new QWidget(widget_2);
        widget_8->setObjectName("widget_8");

        gridLayout_7->addWidget(widget_8, 0, 2, 1, 1);

        widget_16 = new QWidget(widget_2);
        widget_16->setObjectName("widget_16");
        widget_16->setMinimumSize(QSize(10, 0));
        widget_16->setMaximumSize(QSize(10, 16777215));

        gridLayout_7->addWidget(widget_16, 0, 4, 1, 1);

        widget_15 = new QWidget(widget_2);
        widget_15->setObjectName("widget_15");
        widget_15->setMinimumSize(QSize(20, 0));
        widget_15->setMaximumSize(QSize(20, 16777215));

        gridLayout_7->addWidget(widget_15, 0, 0, 1, 1);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/src/more.png); \n"
"	min-width: 30px;\n"
"	max-width: 30px;\n"
"	min-height: 20px;\n"
"	max-height: 20px;\n"
"}\n"
"QPushButton::hover {\n"
"	image: url(:/src/more2.png); \n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/src/more.png); \n"
"}"));

        gridLayout_7->addWidget(pushButton, 0, 3, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 1, 0, 1, 1);


        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        widget_send = new QWidget(widget_chatting);
        widget_send->setObjectName("widget_send");
        widget_send->setMinimumSize(QSize(0, 0));
        widget_send->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_14 = new QGridLayout(widget_send);
        gridLayout_14->setSpacing(0);
        gridLayout_14->setObjectName("gridLayout_14");
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget_send);
        widget_4->setObjectName("widget_4");
        widget_4->setMinimumSize(QSize(0, 30));
        widget_4->setMaximumSize(QSize(16777215, 30));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 196, 188);"));
        pushButton_emoj = new QPushButton(widget_4);
        pushButton_emoj->setObjectName("pushButton_emoj");
        pushButton_emoj->setGeometry(QRect(20, 6, 20, 20));
        pushButton_emoj->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/pic/src/emoj.png); \n"
"	min-width: 20px;\n"
"	max-width: 20px;\n"
"	min-height: 20px;\n"
"	max-height: 20px;\n"
"}\n"
"QPushButton::hover {\n"
"	image: url(:/pic/src/emoj2.png); \n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/pic/src/emoj.png); \n"
"}"));
        pushButton_screenshot = new QPushButton(widget_4);
        pushButton_screenshot->setObjectName("pushButton_screenshot");
        pushButton_screenshot->setGeometry(QRect(120, 6, 20, 20));
        pushButton_screenshot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/pic/src/screenshot.png); \n"
"	min-width: 20px;\n"
"	max-width: 20px;\n"
"	min-height: 20px;\n"
"	max-height: 20px;\n"
"}\n"
"QPushButton::hover {\n"
"	image: url(:/pic/src/screenshot2.png); \n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/pic/src/screenshot.png); \n"
"}"));
        pushButton_chat = new QPushButton(widget_4);
        pushButton_chat->setObjectName("pushButton_chat");
        pushButton_chat->setGeometry(QRect(170, 6, 20, 20));
        pushButton_chat->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/pic/src/chat.png); \n"
"	min-width: 20px;\n"
"	max-width: 20px;\n"
"	min-height: 20px;\n"
"	max-height: 20px;\n"
"}\n"
"QPushButton::hover {\n"
"	image: url(:/pic/src/chat2.png); \n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/pic/src/chat.png); \n"
"}"));
        pushButton_file = new QPushButton(widget_4);
        pushButton_file->setObjectName("pushButton_file");
        pushButton_file->setGeometry(QRect(220, 6, 20, 20));
        pushButton_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/pic/src/file.png); \n"
"	min-width: 20px;\n"
"	max-width: 20px;\n"
"	min-height: 20px;\n"
"	max-height: 20px;\n"
"}\n"
"QPushButton::hover {\n"
"	image: url(:/pic/src/file2.png); \n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/pic/src/file.png); \n"
"}"));
        pushButton_image = new QPushButton(widget_4);
        pushButton_image->setObjectName("pushButton_image");
        pushButton_image->setGeometry(QRect(70, 6, 20, 20));
        pushButton_image->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none; /* no border for a flat push button */\n"
"	image: url(:/pic/src/image.png); \n"
"	min-width: 20px;\n"
"	max-width: 20px;\n"
"	min-height: 20px;\n"
"	max-height: 20px;\n"
"}\n"
"QPushButton::hover {\n"
"	image: url(:/pic/src/image1.png); \n"
"}\n"
"QPushButton:pressed {\n"
"	image: url(:/pic/src/image.png); \n"
"}"));

        gridLayout_14->addWidget(widget_4, 0, 0, 1, 1);

        textEdit_send = new SendTextEdit(widget_send);
        textEdit_send->setObjectName("textEdit_send");
        textEdit_send->setMinimumSize(QSize(0, 0));
        textEdit_send->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\346\226\260\345\256\213\344\275\223")});
        font3.setPointSize(12);
        textEdit_send->setFont(font3);
        textEdit_send->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: none; /* no border for a flat push button */\n"
""));
        textEdit_send->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_send->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_14->addWidget(textEdit_send, 4, 0, 1, 1);


        gridLayout->addWidget(widget_send, 3, 0, 1, 1);


        gridLayout_4->addWidget(widget_main, 0, 0, 1, 1);


        retranslateUi(Client);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Client", nullptr));
        pushButton_msg_list->setText(QString());
        pushBtn_refresh->setText(QCoreApplication::translate("Client", "\345\210\267\346\226\260", nullptr));
        pushButton_emoj_3->setText(QString());
        pushButton_friend_list->setText(QString());
        pushButton_group_list->setText(QString());
        pushButton_system_msg->setText(QString());
        label_icon->setText(QString());
        pushButton_icon->setText(QString());
        pushButton_robot->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_addFriend->setToolTip(QCoreApplication::translate("Client", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_addFriend->setText(QString());
        pushBtn_send->setText(QCoreApplication::translate("Client", "\345\217\221\351\200\201", nullptr));
        pushBtn_hide->setText(QString());
        pushBtn_max->setText(QString());
        pushBtn_close->setText(QString());
        label_info->setText(QCoreApplication::translate("Client", "\350\201\212\345\244\251\344\277\241\346\201\257", nullptr));
        pushButton->setText(QString());
        pushButton_emoj->setText(QString());
        pushButton_screenshot->setText(QString());
        pushButton_chat->setText(QString());
        pushButton_file->setText(QString());
        pushButton_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
