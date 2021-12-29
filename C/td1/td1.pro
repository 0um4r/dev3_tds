TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.c

QMAKE_CFLAGS += -std=c11 \
                -pedantic-errors \
                -D__USE_MINGW_ANSI_STDIO
