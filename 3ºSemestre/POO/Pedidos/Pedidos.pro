TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    cliente.cpp \
    pessoa.cpp \
    itempedido.cpp \
    pedido.cpp \
    faturamento.cpp

HEADERS += \
    cliente.h \
    pessoa.h \
    itempedido.h \
    pedido.h \
    faturamento.h
