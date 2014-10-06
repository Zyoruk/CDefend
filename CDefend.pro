TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    src/proyectil.cpp \
    src/player.cpp \
    src/staticObstacle.cpp \
    src/SimpleList.cpp

HEADERS += \
    src/weapon.h \
    src/proyectil.h \
    src/parentObjectInterface.h \
    src/observer.h \
    src/SimpleList.h \
    src/staticObstacle.h \
    src/SimpleListNode.h \
    interfaceNode.h

