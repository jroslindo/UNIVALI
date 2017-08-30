TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    personagem.cpp \
    guerreiro.cpp \
    mago.cpp

HEADERS += \
    personagem.h \
    guerreiro.h \
    mago.h
