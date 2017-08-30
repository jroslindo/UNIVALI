TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    pessoa.cpp \
    professor.cpp \
    administrativo.cpp \
    professoradministrativo.cpp

HEADERS += \
    pessoa.h \
    professor.h \
    administrativo.h \
    professoradministrativo.h
