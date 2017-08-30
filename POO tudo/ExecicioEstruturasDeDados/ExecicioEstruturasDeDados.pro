TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    cliente.cpp \
    veiculo.cpp \
    fisico.cpp \
    juridico.cpp \
    controle.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    cliente.h \
    veiculo.h \
    fisico.h \
    juridico.h \
    controle.h

