TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    cliente.cpp \
    pessoa.cpp \
    itempedido.cpp \
    pedido.cpp \
    faturamento.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    cliente.h \
    pessoa.h \
    itempedido.h \
    pedido.h \
    faturamento.h

