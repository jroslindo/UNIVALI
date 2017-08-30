TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    personagem.cpp \
    templar.cpp \
    berserker.cpp \
    priest.cpp \
    sorcerer.cpp \
    arqueiro.cpp \
    assassino.cpp \
    jogador.cpp \
    monstro.cpp

HEADERS += \
    personagem.h \
    templar.h \
    berserker.h \
    priest.h \
    sorcerer.h \
    arqueiro.h \
    assassino.h \
    jogador.h \
    jogo.h \
    monstro.h
