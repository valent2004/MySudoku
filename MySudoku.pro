QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    createsudokudialog.cpp \
    loadsudokudialog.cpp \
    main.cpp \
    mainwindow.cpp \
    playsudokudialog.cpp \
    sqlitedbmanager.cpp \
    sudoku.cpp

HEADERS += \
    createsudokudialog.h \
    dbmanager.h \
    loadsudokudialog.h \
    mainwindow.h \
    playsudokudialog.h \
    sqlitedbmanager.h \
    sudoku.h \
    sudokufield.h

FORMS += \
    createsudokudialog.ui \
    loadsudokudialog.ui \
    mainwindow.ui \
    playsudokudialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
