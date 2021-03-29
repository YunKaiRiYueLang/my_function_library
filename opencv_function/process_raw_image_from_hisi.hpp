#pragma once




/**
* path :文件路径
* R GR GB B 一个raw单通道图拆分的4个单通道图，每个感光元件一个像素
* 需要提前包含opencv头文件
*/
#define RAW_WIDTH 3840
#define RAW_HEIGHT 2160
#define SPLIT_WIDTH 1920
#define SPLIT_HEIGHT 1080

bool splitRawImage(string& path, Mat& R, Mat& GR, Mat& GB, Mat& B) {
	fstream  file;
	file.open(path);
	if (!file.is_open()) {
		return false;
	}
	Mat src = Mat::zeros(RAW_HEIGHT, RAW_WIDTH, CV_16UC1);
	file.read((char*)src.data, RAW_WIDTH * RAW_HEIGHT * 2);
	R = Mat::zeros(SPLIT_HEIGHT, SPLIT_WIDTH, CV_16UC1);
	GR = Mat::zeros(SPLIT_HEIGHT, SPLIT_WIDTH, CV_16UC1);
	GB = Mat::zeros(SPLIT_HEIGHT, SPLIT_WIDTH, CV_16UC1);
	B = Mat::zeros(SPLIT_HEIGHT, SPLIT_WIDTH, CV_16UC1);
	unsigned short* r = (unsigned short*)R.data;
	unsigned short* gr = (unsigned short*)GR.data;
	unsigned short* gn = (unsigned short*)GB.data;
	unsigned short* b = (unsigned short*)B.data;
	unsigned short* s = (unsigned short*)src.data;
	for (int i = 0; i < SPLIT_HEIGHT; i++) {
		for (int j = 0; j < SPLIT_WIDTH; j++) {
			r[j] = s[j * 2];
			gr[j] = s[j * 2 + 1];
			gn[j] = s[RAW_WIDTH + j * 2];
			b[j] = s[RAW_WIDTH + j * 2 + 1];
		}
		r += SPLIT_WIDTH;
		gr += SPLIT_WIDTH;
		gn += SPLIT_WIDTH;
		b += SPLIT_WIDTH;
		s += RAW_WIDTH * 2;
	}
	file.close();
	return true;
}