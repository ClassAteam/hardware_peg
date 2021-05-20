QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    antifire_peg.cpp \
    interfacing.cpp \
    main.cpp \
    power_peg.cpp

HEADERS += \
    Struct_DeviceConnect.h \
    Struct_FromRmiOper.h \
    Struct_FromRmiPilot.h \
    Struct_ISU.h \
    Struct_ToRmiNavig.h \
    antifire_peg.h \
    interfacing.h \
    power_peg.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
