QT       += core gui

CONFIG += c++11


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = experiment
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp\

HEADERS  += MainWindow.h

FORMS    += MainWindow.ui