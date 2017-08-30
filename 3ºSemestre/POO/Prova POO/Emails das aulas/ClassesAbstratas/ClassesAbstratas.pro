TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    obra.cpp \
    livro.cpp \
    filme.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    obra.h \
    livro.h \
    filme.h

