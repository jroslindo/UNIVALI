TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    pessoa.cpp \
    funcionario.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    pessoa.h \
    funcionario.h

