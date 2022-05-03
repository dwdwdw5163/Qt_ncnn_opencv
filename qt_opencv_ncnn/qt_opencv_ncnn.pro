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
    ncnn/layer/arm/absval_arm.cpp \
    ncnn/layer/arm/batchnorm_arm.cpp \
    ncnn/layer/arm/bias_arm.cpp \
    ncnn/layer/arm/binaryop_arm.cpp \
    ncnn/layer/arm/cast_arm.cpp \
    ncnn/layer/arm/clip_arm.cpp \
    ncnn/layer/arm/concat_arm.cpp \
    ncnn/layer/arm/convolution_arm.cpp \
    ncnn/layer/arm/convolutiondepthwise_arm.cpp \
    ncnn/layer/arm/crop_arm.cpp \
    ncnn/layer/arm/deconvolution_arm.cpp \
    ncnn/layer/arm/deconvolutiondepthwise_arm.cpp \
    ncnn/layer/arm/dequantize_arm.cpp \
    ncnn/layer/arm/dropout_arm.cpp \
    ncnn/layer/arm/eltwise_arm.cpp \
    ncnn/layer/arm/flatten_arm.cpp \
    ncnn/layer/arm/hardsigmoid_arm.cpp \
    ncnn/layer/arm/hardswish_arm.cpp \
    ncnn/layer/arm/innerproduct_arm.cpp \
    ncnn/layer/arm/interp_arm.cpp \
    ncnn/layer/arm/lrn_arm.cpp \
    ncnn/layer/arm/packing_arm.cpp \
    ncnn/layer/arm/padding_arm.cpp \
    ncnn/layer/arm/pooling_arm.cpp \
    ncnn/layer/arm/prelu_arm.cpp \
    ncnn/layer/arm/quantize_arm.cpp \
    ncnn/layer/arm/relu_arm.cpp \
    ncnn/layer/arm/requantize_arm.cpp \
    ncnn/layer/arm/reshape_arm.cpp \
    ncnn/layer/arm/scale_arm.cpp \
    ncnn/layer/arm/selu_arm.cpp \
    ncnn/layer/arm/shufflechannel_arm.cpp \
    ncnn/layer/arm/sigmoid_arm.cpp \
    ncnn/layer/arm/slice_arm.cpp \
    ncnn/layer/arm/softmax_arm.cpp \
    ncnn/layer/arm/tanh_arm.cpp \
    ncnn/layer/arm/unaryop_arm.cpp \
    ncnn/layer/mips/absval_mips.cpp \
    ncnn/layer/mips/bias_mips.cpp \
    ncnn/layer/mips/clip_mips.cpp \
    ncnn/layer/x86/cast_x86.cpp \
    ncnn/layer/x86/convolution_x86.cpp \
    ncnn/layer/x86/convolutiondepthwise_x86.cpp \
    ncnn/layer/absval.cpp \
    ncnn/layer/argmax.cpp \
    ncnn/layer/batchnorm.cpp \
    ncnn/layer/bias.cpp \
    ncnn/layer/binaryop.cpp \
    ncnn/layer/bnll.cpp \
    ncnn/layer/cast.cpp \
    ncnn/layer/clip.cpp \
    ncnn/layer/concat.cpp \
    ncnn/layer/convolution.cpp \
    ncnn/layer/convolutiondepthwise.cpp \
    ncnn/layer/crop.cpp \
    ncnn/layer/deconvolution.cpp \
    ncnn/layer/deconvolutiondepthwise.cpp \
    ncnn/layer/dequantize.cpp \
    ncnn/layer/detectionoutput.cpp \
    ncnn/layer/dropout.cpp \
    ncnn/layer/eltwise.cpp \
    ncnn/layer/elu.cpp \
    ncnn/layer/embed.cpp \
    ncnn/layer/exp.cpp \
    ncnn/layer/expanddims.cpp \
    ncnn/layer/flatten.cpp \
    ncnn/layer/hardsigmoid.cpp \
    ncnn/layer/hardswish.cpp \
    ncnn/layer/innerproduct.cpp \
    ncnn/layer/input.cpp \
    ncnn/layer/instancenorm.cpp \
    ncnn/layer/interp.cpp \
    ncnn/layer/log.cpp \
    ncnn/layer/lrn.cpp \
    ncnn/layer/lstm.cpp \
    ncnn/layer/memorydata.cpp \
    ncnn/layer/mvn.cpp \
    ncnn/layer/noop.cpp \
    ncnn/layer/normalize.cpp \
    ncnn/layer/packing.cpp \
    ncnn/layer/padding.cpp \
    ncnn/layer/permute.cpp \
    ncnn/layer/pixelshuffle.cpp \
    ncnn/layer/pooling.cpp \
    ncnn/layer/power.cpp \
    ncnn/layer/prelu.cpp \
    ncnn/layer/priorbox.cpp \
    ncnn/layer/proposal.cpp \
    ncnn/layer/psroipooling.cpp \
    ncnn/layer/quantize.cpp \
    ncnn/layer/reduction.cpp \
    ncnn/layer/relu.cpp \
    ncnn/layer/reorg.cpp \
    ncnn/layer/requantize.cpp \
    ncnn/layer/reshape.cpp \
    ncnn/layer/rnn.cpp \
    ncnn/layer/roialign.cpp \
    ncnn/layer/roipooling.cpp \
    ncnn/layer/scale.cpp \
    ncnn/layer/selu.cpp \
    ncnn/layer/shufflechannel.cpp \
    ncnn/layer/sigmoid.cpp \
    ncnn/layer/slice.cpp \
    ncnn/layer/softmax.cpp \
    ncnn/layer/split.cpp \
    ncnn/layer/spp.cpp \
    ncnn/layer/squeeze.cpp \
    ncnn/layer/tanh.cpp \
    ncnn/layer/threshold.cpp \
    ncnn/layer/tile.cpp \
    ncnn/layer/unaryop.cpp \
    ncnn/layer/yolodetectionoutput.cpp \
    ncnn/layer/yolov3detectionoutput.cpp \
    ncnn/allocator.cpp \
    ncnn/benchmark.cpp \
    ncnn/blob.cpp \
    ncnn/command.cpp \
    ncnn/cpu.cpp \
    ncnn/datareader.cpp \
    ncnn/gpu.cpp \
    ncnn/layer.cpp \
    ncnn/mat.cpp \
    ncnn/mat_pixel.cpp \
    ncnn/mat_pixel_android.cpp \
    ncnn/mat_pixel_resize.cpp \
    ncnn/mat_pixel_rotate.cpp \
    ncnn/modelbin.cpp \
    ncnn/net.cpp \
    ncnn/opencv.cpp \
    ncnn/option.cpp \
    ncnn/paramdict.cpp \
    ncnn/pipeline.cpp



HEADERS += \
    mainwindow.h \
    mobilefacenet.h \
    mtcnn.h \
    ncnn/layer/arm/absval_arm.h \
    ncnn/layer/arm/batchnorm_arm.h \
    ncnn/layer/arm/bias_arm.h \
    ncnn/layer/arm/binaryop_arm.h \
    ncnn/layer/arm/cast_arm.h \
    ncnn/layer/arm/clip_arm.h \
    ncnn/layer/arm/concat_arm.h \
    ncnn/layer/arm/convolution_1x1.h \
    ncnn/layer/arm/convolution_1x1_int8.h \
    ncnn/layer/arm/convolution_1x1_pack4.h \
    ncnn/layer/arm/convolution_1x1_pack4_bf16s.h \
    ncnn/layer/arm/convolution_1x1_pack4to1.h \
    ncnn/layer/arm/convolution_1x1_pack4to1_bf16s.h \
    ncnn/layer/arm/convolution_2x2.h \
    ncnn/layer/arm/convolution_3x3.h \
    ncnn/layer/arm/convolution_3x3_int8.h \
    ncnn/layer/arm/convolution_3x3_pack1to4.h \
    ncnn/layer/arm/convolution_3x3_pack1to4_bf16s.h \
    ncnn/layer/arm/convolution_3x3_pack4.h \
    ncnn/layer/arm/convolution_3x3_pack4_bf16s.h \
    ncnn/layer/arm/convolution_3x3_pack4to1.h \
    ncnn/layer/arm/convolution_3x3_pack4to1_bf16s.h \
    ncnn/layer/arm/convolution_4x4.h \
    ncnn/layer/arm/convolution_5x5.h \
    ncnn/layer/arm/convolution_5x5_pack4.h \
    ncnn/layer/arm/convolution_7x7.h \
    ncnn/layer/arm/convolution_7x7_pack1to4.h \
    ncnn/layer/arm/convolution_7x7_pack1to4_bf16s.h \
    ncnn/layer/arm/convolution_arm.h \
    ncnn/layer/arm/convolution_sgemm.h \
    ncnn/layer/arm/convolution_sgemm_int8.h \
    ncnn/layer/arm/convolutiondepthwise_3x3.h \
    ncnn/layer/arm/convolutiondepthwise_3x3_int8.h \
    ncnn/layer/arm/convolutiondepthwise_3x3_pack4.h \
    ncnn/layer/arm/convolutiondepthwise_3x3_pack4_bf16s.h \
    ncnn/layer/arm/convolutiondepthwise_5x5.h \
    ncnn/layer/arm/convolutiondepthwise_5x5_pack4.h \
    ncnn/layer/arm/convolutiondepthwise_arm.h \
    ncnn/layer/arm/crop_arm.h \
    ncnn/layer/arm/deconvolution_3x3.h \
    ncnn/layer/arm/deconvolution_4x4.h \
    ncnn/layer/arm/deconvolution_arm.h \
    ncnn/layer/arm/deconvolutiondepthwise_arm.h \
    ncnn/layer/arm/dequantize_arm.h \
    ncnn/layer/arm/dropout_arm.h \
    ncnn/layer/arm/eltwise_arm.h \
    ncnn/layer/arm/flatten_arm.h \
    ncnn/layer/arm/gemm_symm_int8.h \
    ncnn/layer/arm/hardsigmoid_arm.h \
    ncnn/layer/arm/hardswish_arm.h \
    ncnn/layer/arm/innerproduct_arm.h \
    ncnn/layer/arm/interp_arm.h \
    ncnn/layer/arm/lrn_arm.h \
    ncnn/layer/arm/neon_activation.h \
    ncnn/layer/arm/neon_mathfun.h \
    ncnn/layer/arm/neon_mathfun_tanh.h \
    ncnn/layer/arm/packing_arm.h \
    ncnn/layer/arm/padding_arm.h \
    ncnn/layer/arm/padding_pack4.h \
    ncnn/layer/arm/padding_pack4_bf16s.h \
    ncnn/layer/arm/pooling_2x2.h \
    ncnn/layer/arm/pooling_2x2_pack4.h \
    ncnn/layer/arm/pooling_3x3.h \
    ncnn/layer/arm/pooling_3x3_pack4.h \
    ncnn/layer/arm/pooling_arm.h \
    ncnn/layer/arm/prelu_arm.h \
    ncnn/layer/arm/quantize_arm.h \
    ncnn/layer/arm/relu_arm.h \
    ncnn/layer/arm/requantize_arm.h \
    ncnn/layer/arm/reshape_arm.h \
    ncnn/layer/arm/scale_arm.h \
    ncnn/layer/arm/selu_arm.h \
    ncnn/layer/arm/shufflechannel_arm.h \
    ncnn/layer/arm/sigmoid_arm.h \
    ncnn/layer/arm/slice_arm.h \
    ncnn/layer/arm/softmax_arm.h \
    ncnn/layer/arm/tanh_arm.h \
    ncnn/layer/arm/unaryop_arm.h \
    ncnn/layer/mips/absval_mips.h \
    ncnn/layer/mips/bias_mips.h \
    ncnn/layer/mips/clip_mips.h \
    ncnn/layer/x86/avx_mathfun.h \
    ncnn/layer/x86/cast_x86.h \
    ncnn/layer/x86/convolution_1x1.h \
    ncnn/layer/x86/convolution_1x1_int8.h \
    ncnn/layer/x86/convolution_3x3.h \
    ncnn/layer/x86/convolution_3x3_int8.h \
    ncnn/layer/x86/convolution_5x5.h \
    ncnn/layer/x86/convolution_7x7.h \
    ncnn/layer/x86/convolution_sgemm.h \
    ncnn/layer/x86/convolution_sgemm_int8.h \
    ncnn/layer/x86/convolution_x86.h \
    ncnn/layer/x86/convolutiondepthwise_3x3.h \
    ncnn/layer/x86/convolutiondepthwise_3x3_int8.h \
    ncnn/layer/x86/convolutiondepthwise_x86.h \
    ncnn/layer/x86/sse_mathfun.h \
    ncnn/layer/absval.h \
    ncnn/layer/argmax.h \
    ncnn/layer/batchnorm.h \
    ncnn/layer/bias.h \
    ncnn/layer/binaryop.h \
    ncnn/layer/bnll.h \
    ncnn/layer/cast.h \
    ncnn/layer/clip.h \
    ncnn/layer/concat.h \
    ncnn/layer/convolution.h \
    ncnn/layer/convolutiondepthwise.h \
    ncnn/layer/crop.h \
    ncnn/layer/deconvolution.h \
    ncnn/layer/deconvolutiondepthwise.h \
    ncnn/layer/dequantize.h \
    ncnn/layer/detectionoutput.h \
    ncnn/layer/dropout.h \
    ncnn/layer/eltwise.h \
    ncnn/layer/elu.h \
    ncnn/layer/embed.h \
    ncnn/layer/exp.h \
    ncnn/layer/expanddims.h \
    ncnn/layer/flatten.h \
    ncnn/layer/hardsigmoid.h \
    ncnn/layer/hardswish.h \
    ncnn/layer/innerproduct.h \
    ncnn/layer/input.h \
    ncnn/layer/instancenorm.h \
    ncnn/layer/interp.h \
    ncnn/layer/log.h \
    ncnn/layer/lrn.h \
    ncnn/layer/lstm.h \
    ncnn/layer/memorydata.h \
    ncnn/layer/mvn.h \
    ncnn/layer/noop.h \
    ncnn/layer/normalize.h \
    ncnn/layer/packing.h \
    ncnn/layer/padding.h \
    ncnn/layer/permute.h \
    ncnn/layer/pixelshuffle.h \
    ncnn/layer/pooling.h \
    ncnn/layer/power.h \
    ncnn/layer/prelu.h \
    ncnn/layer/priorbox.h \
    ncnn/layer/proposal.h \
    ncnn/layer/psroipooling.h \
    ncnn/layer/quantize.h \
    ncnn/layer/reduction.h \
    ncnn/layer/relu.h \
    ncnn/layer/reorg.h \
    ncnn/layer/requantize.h \
    ncnn/layer/reshape.h \
    ncnn/layer/rnn.h \
    ncnn/layer/roialign.h \
    ncnn/layer/roipooling.h \
    ncnn/layer/scale.h \
    ncnn/layer/selu.h \
    ncnn/layer/shufflechannel.h \
    ncnn/layer/sigmoid.h \
    ncnn/layer/slice.h \
    ncnn/layer/softmax.h \
    ncnn/layer/split.h \
    ncnn/layer/spp.h \
    ncnn/layer/squeeze.h \
    ncnn/layer/tanh.h \
    ncnn/layer/threshold.h \
    ncnn/layer/tile.h \
    ncnn/layer/unaryop.h \
    ncnn/layer/yolodetectionoutput.h \
    ncnn/layer/yolov3detectionoutput.h \
    ncnn/allocator.h \
    ncnn/benchmark.h \
    ncnn/blob.h \
    ncnn/command.h \
    ncnn/convert_ycbcr.comp \
    ncnn/cpu.h \
    ncnn/datareader.h \
    ncnn/gpu.h \
    ncnn/layer.h \
    ncnn/layer_declaration.h \
    ncnn/layer_registry.h \
    ncnn/layer_shader_registry.h \
    ncnn/layer_shader_spv_data.h \
    ncnn/layer_type.h \
    ncnn/layer_type_enum.h \
    ncnn/mat.h \
    ncnn/modelbin.h \
    ncnn/net.h \
    ncnn/opencv.h \
    ncnn/option.h \
    ncnn/paramdict.h \
    ncnn/pipeline.h \
    ncnn/platform.h \
    ncnn/platform.h.in


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
    $${usrLocLib}/libopencv_stitching.so






INCLUDEPATH += /usr/local/include/opencv
INCLUDEPATH += /usr/local/include

DISTFILES += \
    ncnn/CMakeLists.txt \
    ncnn/layer_declaration.h.in \
    ncnn/layer_registry.h.in \
    ncnn/layer_shader_registry.h.in \
    ncnn/layer_shader_spv_data.h.in \
    ncnn/layer_type_enum.h.in

INCLUDEPATH += ./ncnn/layer
INCLUDEPATH += ./ncnn



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

