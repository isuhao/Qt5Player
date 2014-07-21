TEMPLATE = app
TARGET = player

QT += multimedia \
      multimediawidgets \
      widgets \
      sql
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

HEADERS = \
    player.h \
    playercontrols.h \
    playlistmodel.h \
    videowidget.h \
    mediacenter.h \
    connection.h
SOURCES = main.cpp \
    player.cpp \
    playercontrols.cpp \
    playlistmodel.cpp \
    videowidget.cpp \
    mediacenter.cpp \
    connection.cpp

maemo* {
    DEFINES += PLAYER_NO_COLOROPTIONS
}

target.path = $$[QT_INSTALL_EXAMPLES]/multimediawidgets/player
INSTALLS += target

FORMS +=
