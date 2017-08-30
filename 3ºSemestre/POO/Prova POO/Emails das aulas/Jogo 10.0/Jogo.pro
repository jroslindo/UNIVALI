TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    personagem.cpp \
    berserker.cpp \
    templar.cpp \
    sorcerer.cpp \
    priest.cpp \
    assassino.cpp \
    arqueiro.cpp \
    monstro.cpp

HEADERS += \
    personagem.h \
    berserker.h \
    templar.h \
    sorcerer.h \
    priest.h \
    assassino.h \
    arqueiro.h \
    monstro.h
