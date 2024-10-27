/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Widget/ShowVideoWidget.h"
#include "Widget/VideoSlider.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_container;
    QWidget *widget_controller;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_play;
    QPushButton *pushButton_pause;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_stop;
    QSpacerItem *horizontalSpacer_6;
    VideoSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout;
    QLabel *label_currenttime;
    QLabel *label_2;
    QLabel *label_totaltime;
    QPushButton *pushButton_volume;
    QSlider *horizontalSlider_volume;
    QLabel *label_volume;
    QWidget *widget_video_back;
    QHBoxLayout *horizontalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *page_open;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_showopen;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_open;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page_audio;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *page_video;
    QVBoxLayout *verticalLayout_8;
    ShowVideoWidget *widget_videoPlayer;
    QWidget *widget_list;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *label_num;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_open;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_clear;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_9;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1060, 695);
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_container = new QWidget(MainWindow);
        widget_container->setObjectName(QString::fromUtf8("widget_container"));
        widget_container->setStyleSheet(QString::fromUtf8("QWidget#widget_container\n"
"{\n"
"	background-color: rgb(22, 22, 22);\n"
"}\n"
""));
        widget_controller = new QWidget(widget_container);
        widget_controller->setObjectName(QString::fromUtf8("widget_controller"));
        widget_controller->setGeometry(QRect(70, 480, 971, 60));
        widget_controller->setStyleSheet(QString::fromUtf8("QWidget#widget_controller\n"
"{\n"
"	background-color: rgba(60, 65, 68,160);\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(widget_controller);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        horizontalSpacer_3 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_play = new QPushButton(widget_controller);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));
        pushButton_play->setMinimumSize(QSize(36, 36));
        pushButton_play->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_play->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"image: url(:image/start_normal.png);\n"
"border-radius:0px; \n"
"}  \n"
"QPushButton:hover{ \n"
"image: url(:image/start_focus.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:pressed{ \n"
"image: url(:image/start_normal.png);\n"
"border-radius:0px; \n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_play);

        pushButton_pause = new QPushButton(widget_controller);
        pushButton_pause->setObjectName(QString::fromUtf8("pushButton_pause"));
        pushButton_pause->setMinimumSize(QSize(36, 36));
        pushButton_pause->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_pause->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"image: url(:image/pause_normal.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:hover{ \n"
"image: url(:image/pause_focus.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:pressed{ \n"
"image: url(:image/pause_normal.png);\n"
"border-radius:0px; \n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_pause);

        horizontalSpacer_5 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        pushButton_stop = new QPushButton(widget_controller);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));
        pushButton_stop->setMinimumSize(QSize(36, 36));
        pushButton_stop->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_stop->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"image: url(:image/stop_normal.png);\n"
"border-radius:0px; \n"
"}  \n"
"QPushButton:hover{ \n"
"image: url(:image/stop_focus.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:pressed{ \n"
"image: url(:image/stop_normal.png);\n"
"border-radius:0px; \n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_stop);

        horizontalSpacer_6 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalSlider = new VideoSlider(widget_controller);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 0px solid #bbb;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background-color: #ff9900;\n"
"border-bottom-left-radius: 2px; \n"
"border-top-left-radius: 2px; \n"
"\n"
"border-radius: 2px; \n"
"margin-top:5px;\n"
"margin-bottom:5px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background-color: rgba(228, 228, 228, 50);v\n"
"border: 0px solid #777;\n"
"border-radius: 2px;\n"
"margin-top:5px;\n"
"margin-bottom:5px;\n"
"}\n"
"/*\n"
"QSlider::handle:horizontal {\n"
"background: rgb(255,153,102); \n"
"border: 1px solid rgb(255,153,102); \n"
"width: 14px;\n"
"height:10px;\n"
"border-radius: 7px;\n"
"margin-top:2px;\n"
"margin-bottom:2px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: rgb(255,128,6); \n"
"border: 1px solid rgba(102,102,102,102);\n"
"border-radius: 7px;\n"
"}*/\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: #bbb;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: #eee;\n"
""
                        "border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #eee;\n"
"border: 1px solid #aaa;\n"
"border-radius: 2px;\n"
"}\n"
""));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_currenttime = new QLabel(widget_controller);
        label_currenttime->setObjectName(QString::fromUtf8("label_currenttime"));
        label_currenttime->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-radius:0px;\n"
"	color: #F0F0F0;\n"
"	background-color:rgba(0,0,0,0);\n"
"	border-style:none;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"font-size:16px;\n"
"}\n"
""));

        horizontalLayout->addWidget(label_currenttime);

        label_2 = new QLabel(widget_controller);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-radius:0px;\n"
"	color: #F0F0F0;\n"
"	background-color:rgba(0,0,0,0);\n"
"	border-style:none;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"font-size:16px;\n"
"}\n"
""));

        horizontalLayout->addWidget(label_2);

        label_totaltime = new QLabel(widget_controller);
        label_totaltime->setObjectName(QString::fromUtf8("label_totaltime"));
        label_totaltime->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-radius:0px;\n"
"	color: #F0F0F0;\n"
"	background-color:rgba(0,0,0,0);\n"
"	border-style:none;\n"
"font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"font-size:16px;\n"
"}\n"
""));

        horizontalLayout->addWidget(label_totaltime);


        horizontalLayout_2->addLayout(horizontalLayout);

        pushButton_volume = new QPushButton(widget_controller);
        pushButton_volume->setObjectName(QString::fromUtf8("pushButton_volume"));
        pushButton_volume->setMinimumSize(QSize(36, 36));
        pushButton_volume->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_volume->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"image: url(:/image/volume_normal.png);\n"
"border-radius:0px; \n"
"padding:5px;\n"
"}  \n"
"QPushButton:hover{ \n"
"image: url(:image/stop_focus.png);\n"
"border-radius:0px; \n"
"padding:3px;\n"
"} \n"
"QPushButton:!checked{ \n"
"image: url(:/image/volume_normal.png);\n"
"} \n"
"QPushButton:checked{ \n"
"image: url(:/image/volume_mute.png);\n"
"} \n"
"\n"
""));
        pushButton_volume->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_volume);

        horizontalSlider_volume = new QSlider(widget_controller);
        horizontalSlider_volume->setObjectName(QString::fromUtf8("horizontalSlider_volume"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalSlider_volume->sizePolicy().hasHeightForWidth());
        horizontalSlider_volume->setSizePolicy(sizePolicy);
        horizontalSlider_volume->setMaximumSize(QSize(150, 16777215));
        horizontalSlider_volume->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 0px solid #bbb;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: rgb(235,97,0);\n"
"border-radius: 0px;\n"
"margin-top:8px;\n"
"margin-bottom:8px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(255,255, 255);\n"
"border: 0px solid #777;\n"
"border-radius: 2px;\n"
"margin-top:8px;\n"
"margin-bottom:8px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: rgb(255,153,102); \n"
"border: 1px solid rgb(255,153,102); \n"
"width: 8px;\n"
"height:8px;\n"
"border-radius: 2px;\n"
"margin-top:6px;\n"
"margin-bottom:6px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: rgb(255,128,6); \n"
"border: 1px solid rgba(102,102,102,102);\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: #bbb;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: #eee;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #eee;\n"
""
                        "border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
""));
        horizontalSlider_volume->setMaximum(100);
        horizontalSlider_volume->setSingleStep(0);
        horizontalSlider_volume->setPageStep(0);
        horizontalSlider_volume->setValue(50);
        horizontalSlider_volume->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_volume);

        label_volume = new QLabel(widget_controller);
        label_volume->setObjectName(QString::fromUtf8("label_volume"));
        label_volume->setMinimumSize(QSize(20, 0));
        label_volume->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-radius:0px;\n"
"	color: #F0F0F0;\n"
"	background-color:rgba(0,0,0,0);\n"
"	border-style:none;\n"
"font: 16px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"}\n"
""));
        label_volume->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_volume);


        verticalLayout_7->addLayout(horizontalLayout_2);

        widget_video_back = new QWidget(widget_container);
        widget_video_back->setObjectName(QString::fromUtf8("widget_video_back"));
        widget_video_back->setGeometry(QRect(120, 80, 681, 301));
        horizontalLayout_4 = new QHBoxLayout(widget_video_back);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(widget_video_back);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_open = new QWidget();
        page_open->setObjectName(QString::fromUtf8("page_open"));
        verticalLayout_6 = new QVBoxLayout(page_open);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_showopen = new QWidget(page_open);
        widget_showopen->setObjectName(QString::fromUtf8("widget_showopen"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_showopen->sizePolicy().hasHeightForWidth());
        widget_showopen->setSizePolicy(sizePolicy1);
        widget_showopen->setStyleSheet(QString::fromUtf8("QWidget#widget_showopen\n"
"{\n"
"	\n"
"	background-color: rgba(60, 65, 68,100);\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(widget_showopen);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        toolButton_open = new QToolButton(widget_showopen);
        toolButton_open->setObjectName(QString::fromUtf8("toolButton_open"));
        toolButton_open->setMinimumSize(QSize(160, 50));
        toolButton_open->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(toolButton_open);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_6->addWidget(widget_showopen);

        stackedWidget->addWidget(page_open);
        page_audio = new QWidget();
        page_audio->setObjectName(QString::fromUtf8("page_audio"));
        verticalLayout_2 = new QVBoxLayout(page_audio);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(page_audio);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("image: url(:/image/audio.png);"));

        verticalLayout_2->addWidget(label);

        stackedWidget->addWidget(page_audio);
        page_video = new QWidget();
        page_video->setObjectName(QString::fromUtf8("page_video"));
        verticalLayout_8 = new QVBoxLayout(page_video);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        widget_videoPlayer = new ShowVideoWidget(page_video);
        widget_videoPlayer->setObjectName(QString::fromUtf8("widget_videoPlayer"));
        widget_videoPlayer->setEnabled(true);
        sizePolicy1.setHeightForWidth(widget_videoPlayer->sizePolicy().hasHeightForWidth());
        widget_videoPlayer->setSizePolicy(sizePolicy1);
        widget_videoPlayer->setMouseTracking(true);
        widget_videoPlayer->setStyleSheet(QString::fromUtf8("QWidget#widget_videoPlayer\n"
"{\n"
"	background-color: rgb(255, 55, 195);\n"
"}"));

        verticalLayout_8->addWidget(widget_videoPlayer);

        stackedWidget->addWidget(page_video);

        horizontalLayout_4->addWidget(stackedWidget);

        widget_list = new QWidget(widget_video_back);
        widget_list->setObjectName(QString::fromUtf8("widget_list"));
        widget_list->setMaximumSize(QSize(180, 16777215));
        widget_list->setStyleSheet(QString::fromUtf8("QWidget#widget_left\n"
"{\n"
"	background-color: rgb(47, 48, 57);\n"
"}\n"
""));
        verticalLayout_4 = new QVBoxLayout(widget_list);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget_list);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(12, 0, 12, 0);
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color:#ffffff;\n"
"font-size:12px;"));

        horizontalLayout_5->addWidget(label_3);

        label_num = new QLabel(widget_4);
        label_num->setObjectName(QString::fromUtf8("label_num"));
        label_num->setStyleSheet(QString::fromUtf8("color:#ffffff;\n"
"font-size:12px;"));

        horizontalLayout_5->addWidget(label_num);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pushButton_open = new QPushButton(widget_4);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setMinimumSize(QSize(36, 36));
        pushButton_open->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_open->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"image: url(:image/open_normal.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:hover{ \n"
"image: url(:image/open_focus.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:pressed{ \n"
"image: url(:image/open_normal.png);\n"
"border-radius:0px; \n"
"}\n"
""));

        horizontalLayout_5->addWidget(pushButton_open);

        horizontalSpacer_7 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        pushButton_clear = new QPushButton(widget_4);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setMinimumSize(QSize(32, 32));
        pushButton_clear->setMaximumSize(QSize(32, 32));
        pushButton_clear->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"	padding:6px;\n"
"	border:none;\n"
"	image: url(:/player/image/videoplayer/delete.png);\n"
"}  \n"
"QPushButton:hover{ \n"
"padding:3px;\n"
"} \n"
"QPushButton:pressed{ \n"
"\n"
"}\n"
""));

        horizontalLayout_5->addWidget(pushButton_clear);


        verticalLayout_4->addWidget(widget_4);

        widget_5 = new QWidget(widget_list);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        widget_5->setStyleSheet(QString::fromUtf8("QWidget#widget_5\n"
"{\n"
"	border-radius:0px;\n"
"border-top-style: solid; \n"
"border-top-width: 2px; \n"
"border-top-color: #cccccc; \n"
"}"));
        verticalLayout_9 = new QVBoxLayout(widget_5);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widget_5);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
"	border:none;\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QListView::item{\n"
"\n"
"padding:0 0px; \n"
"font-size:14px;\n"
"height:30px;\n"
"font-family: \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255,255,255);\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"background-color: rgba(255, 255, 255, 100);\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"/*background-color: #4B5CC4;*/\n"
"background-color: rgba(255, 255, 255, 130);\n"
"}\n"
"\n"
"\n"
"/*\n"
"QListView::item:selected:!active {\n"
"border-radius:5px; \n"
"border:1px solid rgb(210, 225, 230);\n"
"background-color: qlineargradient(spread:reflect, x1:0.501, y1:0, x2:0.506, y2:0.489182, stop:0.0284091 rgba(255, 255, 255, 255), stop:1 rgba(255, 170, 0, 255));\n"
"}\n"
"QListView::item:selected:active {\n"
"border-radius:5px; \n"
"border:1px solid rgb(210, 225, 230);\n"
"background-color: qlineargradient(spread:reflect, x1:0.501, y1:0, x2:0.506, y2:0.489182, stop:0.0284091 rgba(255, 255, 255, 255), stop:1 rgba"
                        "(255, 170, 0, 255));\n"
"}\n"
"*/"));
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setProperty("showDropIndicator", QVariant(true));
        listWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listWidget->setSelectionRectVisible(false);

        verticalLayout_9->addWidget(listWidget);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer);


        verticalLayout_4->addWidget(widget_5);


        horizontalLayout_4->addWidget(widget_list);

        widget_video_back->raise();
        widget_controller->raise();

        verticalLayout->addWidget(widget_container);


        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Form", nullptr));
        pushButton_play->setText(QString());
        pushButton_pause->setText(QString());
        pushButton_stop->setText(QString());
        label_currenttime->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label_totaltime->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        pushButton_volume->setText(QString());
        label_volume->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        toolButton_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250:", nullptr));
        label_num->setText(QCoreApplication::translate("MainWindow", "0\344\270\252\346\226\207\344\273\266", nullptr));
        pushButton_open->setText(QString());
        pushButton_clear->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
