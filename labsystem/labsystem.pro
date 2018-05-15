TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    source.cpp \
    equipment.cpp \
    paper.cpp \
    book.cpp \
    computer.cpp \
    document.cpp \
    printer.cpp \
    bookmanage.cpp \
    papermanage.cpp \
    user.cpp \
    usermanage.cpp

HEADERS += \
    source.h \
    document.h \
    paper.h \
    book.h \
    computer.h \
    equipment.h \
    printer.h \
    bookmanage.h \
    papermanage.h \
    user.h \
    usermanage.h
