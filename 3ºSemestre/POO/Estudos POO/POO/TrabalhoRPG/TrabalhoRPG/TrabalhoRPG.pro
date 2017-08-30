TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    personagem.cpp \
    guerreiro.cpp \
    mago.cpp \
    ladino.cpp \
    berserker.cpp \
    templar.cpp \
    sorcerer.cpp \
    priest.cpp \
    assassino.cpp \
    arqueiro.cpp

HEADERS += \
    personagem.h \
    guerreiro.h \
    mago.h \
    ladino.h \
    berserker.h \
    templar.h \
    sorcerer.h \
    priest.h \
    assassino.h \
    arqueiro.h
