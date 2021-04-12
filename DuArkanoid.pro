#-------------------------------------------------
#
# Project created by QtCreator 2015-09-22T16:27:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DuArkanoid
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    DuArkanoid.cpp \
    DuGraphicsScene.cpp \
    DuIObjectItem.cpp \
    DuBallItem.cpp \
    DuPlatformItem.cpp \
    DuThreadTimer.cpp \
    DuUtil.cpp

HEADERS  += MainWindow.h \
    DuArkanoid.h \
    DuGraphicsScene.h \
    DuIObjectItem.h \
    DuBallItem.h \
    DuPlatformItem.h \
    DuThreadTimer.h \
    DuUtil.h \
    DuGlobalDefines.h

FORMS    += MainWindow.ui

QMAKE_CXXFLAGS += -std=gnu++14
