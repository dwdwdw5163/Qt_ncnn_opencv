QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mobilefacenet.cpp \
    mtcnn.cpp \




HEADERS += \
    mainwindow.h \
    mobilefacenet.h \
    mtcnn.h \


FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    qt_opencv_ncnn_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

## Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target


# 配置 openmp
QMAKE_CXXFLAGS += -fopenmp
LIBS += -fopenmp

LIBS += -lpthread -lm


NCNN_DIR = ./ncnn
usrLocLib = /usr/local/lib
# 配置所用库so文件
LIBS += $${usrLocLib}/libopencv_highgui.so \
    $${usrLocLib}/libopencv_core.so \
    $${usrLocLib}/libopencv_imgproc.so \
    $${usrLocLib}/libopencv_imgcodecs.so \
    $${usrLocLib}/libopencv_video.so \
    $${usrLocLib}/libopencv_videoio.so \
    $${usrLocLib}/libopencv_calib3d.so \
    $${usrLocLib}/libopencv_features2d.so \
    $${usrLocLib}/libopencv_flann.so \
    $${usrLocLib}/libopencv_objdetect.so \
    $${usrLocLib}/libopencv_photo.so \
    $${usrLocLib}/libopencv_stitching.so \
    /home/zhang/Project/Qt_ncnn_opencv/qt_opencv_ncnn/ncnn/build/install/lib/libncnn.a







INCLUDEPATH += /usr/local/include/opencv
INCLUDEPATH += /usr/local/include

INCLUDEPATH += $${NCNN_DIR}/build/install/include/ncnn \
               $${NCNN_DIR}/src



#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/ncnn/build/src/release/ -lncnn
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/ncnn/build/src/debug/ -lncnn
#else:unix: LIBS += -L$$PWD/ncnn/build/src/ -lncnn

#INCLUDEPATH += $$PWD/ncnn/build/src
#DEPENDPATH += $$PWD/ncnn/build/src

#win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/ncnn/build/src/release/libncnn.a
#else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/ncnn/build/src/debug/libncnn.a
#else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/ncnn/build/src/release/ncnn.lib
#else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/ncnn/build/src/debug/ncnn.lib
#else:unix: PRE_TARGETDEPS += $$PWD/ncnn/build/src/libncnn.a

