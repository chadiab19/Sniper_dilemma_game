QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    BulleOfPlayer2.cpp \
    BulletOfPlayer1.cpp \
    MyRect.cpp \
    Player1.cpp \
    Player2.cpp \
    Score.cpp \
    Target.cpp \
    currentPlayer.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    BulletOfPlayer1.h \
    BulletOfplayer2.h \
    MyRect.h \
    Score.hpp \
    Target.h \
    currentPlayer.hpp \
    mainwindow.h \
    player1.hpp \
    player2.hpp

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
