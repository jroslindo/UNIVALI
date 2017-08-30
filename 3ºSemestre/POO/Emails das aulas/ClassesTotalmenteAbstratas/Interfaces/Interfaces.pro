TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    automovel.cpp \
    funcionario.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    automovel.h \
    funcionario.h \
    custo.h \
    visualizacao.h

