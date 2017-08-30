TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    jogador.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    jogador.h

