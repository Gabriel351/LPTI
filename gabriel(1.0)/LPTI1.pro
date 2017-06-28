#-------------------------------------------------
#
# Project created by QtCreator 2017-04-02T13:21:43
#
#-------------------------------------------------

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LPTI1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        login.cpp \
    sobre.cpp \
    recsenha.cpp \
    menuprinc.cpp \
    menucadas.cpp \
    cadasuser.cpp \
    cadaslab.cpp \
    cadasequip.cpp \
    menuempres.cpp \
    empresincluir.cpp \
    empresremover.cpp \
    empresrenovar.cpp \
    empresdevolver.cpp \
    menucadasoption.cpp \
    alterarequip.cpp \
    alterarlab.cpp \
    alteraruser.cpp \
    menualterar.cpp \
    menuremove.cpp \
    removeequip.cpp \
    removelab.cpp \
    removeuser.cpp \
    consultaprincipal.cpp \
    consusuarios.cpp \
    conslab.cpp \
    consempresimo.cpp \
    consequi.cpp

HEADERS  += login.h \
    sobre.h \
    recsenha.h \
    menuprinc.h \
    menucadas.h \
    cadasuser.h \
    cadaslab.h \
    cadasequip.h \
    menuempres.h \
    empresincluir.h \
    empresremover.h \
    empresrenovar.h \
    empresdevolver.h \
    menucadasoption.h \
    alterarequip.h \
    alterarlab.h \
    alteraruser.h \
    menualterar.h \
    menuremove.h \
    removeequip.h \
    removelab.h \
    removeuser.h \
    consultaprincipal.h \
    consusuarios.h \
    conslab.h \
    consempresimo.h \
    consequi.h

FORMS    += login.ui \
    sobre.ui \
    recsenha.ui \
    menuprinc.ui \
    menucadas.ui \
    cadasuser.ui \
    cadaslab.ui \
    cadasequip.ui \
    menuempres.ui \
    empresincluir.ui \
    empresremover.ui \
    empresrenovar.ui \
    empresdevolver.ui \
    menucadasoption.ui \
    alterarequip.ui \
    alterarlab.ui \
    alteraruser.ui \
    menualterar.ui \
    menuremove.ui \
    removeequip.ui \
    removelab.ui \
    removeuser.ui \
    consultaprincipal.ui \
    consusuarios.ui \
    conslab.ui \
    consempresimo.ui \
    consequi.ui

RESOURCES += \
    resource.qrc
