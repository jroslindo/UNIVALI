TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    personagem.cpp \
    monstro.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    personagem.h \
    monstro.h

