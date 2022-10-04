# Qt_ncnn_opencv  
使用Opencv+insightface模型+dlib+Qt+ncnn实现活体检测，人脸识别和基于关键点的疲劳驾驶检测。
“中国软件杯” 全国三等奖
This project is a combination of opencv(image processing), qt5, mtcnn+facenet(face detection and feature extraction), sqlite database(for history data storage), dlib(face landmark), ncnn(high-performance neural network inference computing framework optimized for mobile platforms).

## Feature  
 - Identity verification & human verification
 - blinking and yawning detection
 - illegal behavior capture(image,time,details)
 - line chart of the data
 
## Usage  
Use Qt creater
Download dlib face landmark model
Alter the PATH in the source code
