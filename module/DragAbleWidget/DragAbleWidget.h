
#ifndef DRAGABLEWIDGET_H
#define DRAGABLEWIDGET_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class DragAbleWidget;
}

//���ʵ�ָı䴰�ڴ�С
#define PADDING 6
enum Direction { UP=0, DOWN, LEFT, RIGHT, LEFTTOP, LEFTBOTTOM, RIGHTBOTTOM, RIGHTTOP, NONE };


class DragAbleWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DragAbleWidget(QWidget *parent = 0);
    ~DragAbleWidget();

    QWidget *getContainWidget();

    void setTitle(QString str);

private:
    Ui::DragAbleWidget *ui;

    QTimer *mTimer;

    ///�����Ǹı䴰���С���
    ////////
protected:
//    bool eventFilter(QObject *obj, QEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);

private:
    bool isMax = false; //�Ƿ����
    QRect mLocation;

    bool mIsResizeMode = false;

    bool isLeftPressDown = false;  // �ж�����Ƿ���
    QPoint dragPosition;   // �����ƶ��϶�ʱ��Ҫ��ס�ĵ�
    int dir;        // ���ڴ�С�ı�ʱ����¼�ı䷽��

    void checkCursorDirect(const QPoint &cursorGlobalPoint);

    void doShowFullScreen();
    void doShowNormal();

    void showBorderRadius(bool isShow);
    void doChangeFullScreen();

private slots:
    void slotTimerTimeOut();

    void on_btnMenu_Close_clicked();
    void on_btnMenu_Max_clicked();
    void on_btnMenu_Min_clicked();

};

#endif // DRAGABLEWIDGET_H
