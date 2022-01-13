TEMPLATE = app
CONFIG += console # c++11
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++17 -pedantic-errors

SOURCES += \
        data.cpp \
        main.cpp

HEADERS += \
    data.h \
    duration.h \
    random/random.hpp \
    sign.h
