TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    pessoa.cpp \
    professor.cpp \
    administrativo.cpp \
    professoradministrativo.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    pessoa.h \
    professor.h \
    administrativo.h \
    professoradministrativo.h

