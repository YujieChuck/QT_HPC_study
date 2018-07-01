#-------------------------------------------------
#
# Project created by QtCreator 2018-06-21T11:17:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QT_HPC_study
TEMPLATE = app
PRECOMPILED_HEADER  = head.h


SOURCES += main.cpp\
    inc/gui/gui.cpp \
    inc/gui/basewindow.cpp \
    inc/gui/csvfileparse.cpp \
    inc/gui/groupboxextend.cpp \
    inc/gui/mytitlebar.cpp \
    inc/gui/csvfilewrite.cpp \
    inc/unity/caeglobalfunction.cpp \
    ccenterwidget.cpp \
    qt_hpc_studyy_qmainwindow.cpp \
    qt_hpc_study_qdialog.cpp

HEADERS  += \
    inc/gui/gui.h \
    inc/gui/basewindow.h \
    inc/gui/csvfileparse.h \
    inc/gui/groupboxextend.h \
    inc/gui/mytitlebar.h \
    inc/gui/csvfilewrite.h \
    inc/unity/caeglobalfunction.h \
    head.h \
    ccenterwidget.h \
    qt_hpc_study_qmainwindow.h \
    qt_hpc_study_qdialog.h


DISTFILES +=

RESOURCES += \
    ConfigurationFolder/images/QSS/qt_hpc_rc.qrc
