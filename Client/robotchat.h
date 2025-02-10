#ifndef ROBOTCHAT_H
#define ROBOTCHAT_H

#include <QWidget>

namespace Ui {
class RobotChat;
}

class RobotChat : public QWidget
{
    Q_OBJECT

public:
    explicit RobotChat(QWidget *parent = nullptr);
    ~RobotChat();
protected:
    bool eventFilter(QObject *target, QEvent *event);
private slots:
    void on_send_clicked();
private:
    Ui::RobotChat *ui;
};

#endif // ROBOTCHAT_H
