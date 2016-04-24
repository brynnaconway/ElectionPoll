#-------------------------------------------------
#
# Project created by QtCreator 2016-04-10T15:17:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = NDVoters
TEMPLATE = app


SOURCES +=\
        mainwindow.cpp \
    qcustomplot.cpp \
    Candidate.cpp \
    Voter.cpp \
    main.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    Candidate.h \
    Voter.h

FORMS    += mainwindow.ui
