import cv2
import numpy as np
def cv_imread(filePath):
    cv_img = cv2.imdecode(np.fromfile(filePath, dtype=np.uint8), -1)
    return cv_img
def cv_imwrite(filename,src):
    cv2.imencode('.jpg',src)[1].tofile(filename)