#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/core/utils/filesystem.hpp>
#include<fstream>
/**
 * @brief read image. can check path's correctness and printf message.
 * 
 * @param path input file path
 * @param mode cv::ImreadModes
 * @return cv::Mat 
 */

cv::Mat read_image(std::string path,cv::ImreadModes mode) {
	if (cv::utils::fs::exists(path)) {
		if (cv::utils::fs::isDirectory(path)) {
			printf("input path is Directory,but needed is an image path");
			exit(0);
		}
		cv::Mat temp = cv::imread(path, mode);
		if (temp.data != NULL) {
			return temp;
		}
		printf("read the image file incorrect\n");
		exit(0);
	}
	printf("do not exist the path,check the input image path\n");
	exit(0);
}


cv::Mat readRaw16bit1920_1080(const cv::String& path) {
    std::ifstream file(path,std::ios::binary);
    if (!file.is_open()) {
        return cv::Mat();
    }
    cv::Mat src = cv::Mat::ones(1080, 1920, CV_16UC1);
    file.read((char*)src.data,1920*1080*2);
    file.close();
    return src;
}
