#include "robotchat.h"
#include "ui_robotchat.h"
#include<QKeyEvent>
RobotChat::RobotChat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RobotChat)
{
    ui->setupUi(this);
    ui->textEdit->setFocusPolicy(Qt::StrongFocus);
    ui->textBrowser->setFocusPolicy(Qt::NoFocus);

    ui->textEdit->setFocus();
    ui->textEdit->installEventFilter(this);//设置完后自动调用其eventFilter函数
}

RobotChat::~RobotChat()
{
    delete ui;
}
bool RobotChat::eventFilter(QObject *target, QEvent *event)
{
    if(target == ui->textEdit)
    {
        if(event->type() == QEvent::KeyPress)//回车键
        {
            QKeyEvent *k = static_cast<QKeyEvent *>(event);
            if(k->key() == Qt::Key_Return)
            {
                on_send_clicked();
                return true;
            }
        }
    }
    return QWidget::eventFilter(target,event);
}
void RobotChat::on_send_clicked()
{
    QString msg = ui->textEdit->toHtml();
    ui->textEdit->clear();
    ui->textEdit->setFocus();
    ui->textBrowser->append(msg);

}
