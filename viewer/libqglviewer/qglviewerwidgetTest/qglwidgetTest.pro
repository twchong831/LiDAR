QT       += core gui xml opengl


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 warn_on thread rtti console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    glpointcloud.cpp \
    main.cpp \
    mainwindow.cpp \
    qglwidget.cpp \
    qglwidget_pc.cpp

HEADERS += \
    glpointcloud.h \
    mainwindow.h \
    qglwidget.h \
    qglwidget_pc.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -LC:/Qt/5.12.11/mingw73_64/lib/ -lQGLViewer2 -lQGLViewerd2
else:win32:CONFIG(debug, debug|release): LIBS += -LC:/Qt/5.12.11/mingw73_64/lib/ -lQGLViewer2 -lQGLViewerd2
else:unix: LIBS += -L$$PWD/../../../../../../../../../usr/local/lib/ -lQGLViewer-qt5

win32: LIBS += -lopengl32 -lglu32

linux-g++*
{
INCLUDEPATH += $$PWD/../../../../../../../../../usr/local/include
    DEPENDPATH += $$PWD/../../../../../../../../../usr/local/include
}

win32
{
    INCLUDEPATH += C:/Qt/5.12.11/mingw73_64/include
    DEPENDPATH += C:/Qt/5.12.11/mingw73_64/include
}
