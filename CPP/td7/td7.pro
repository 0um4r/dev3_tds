TEMPLATE = app
CONFIG += console # c++11
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++17 -pedantic-errors

SOURCES += \
        esi.cpp \
        main.cpp

HEADERS += \
    esi.hpp \
    random.hpp
