#-------------------------------------------------
#
# Project created by QtCreator 2014-04-09T20:51:31
#
#-------------------------------------------------

QT       += core network

QT       -= gui

TARGET = PCRemoteControlServer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += src/main.cpp \
    src/TCPServer.cpp

HEADERS += \
    src/TCPServer.h
