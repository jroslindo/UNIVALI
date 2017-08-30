TEMPLATE = app



CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11


SOURCES += main.cpp \
    pessoa.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    pessoa.h

