//c++ 计时opencv的api的 计时函数。用了api，会比实际时间多1.几毫秒
class Mytime {
public:
    Mytime() {
        time = static_cast<double>(cv::getTickCount());
    }
    Mytime(const std::string& iMes) :mes(iMes) {
        time = static_cast<double>(cv::getTickCount());
    }
    ~Mytime() {
        time = (static_cast<double>(cv::getTickCount()) - time) / cv::getTickFrequency() * 1000;
        std::cout << mes << "耗时：" << time << "ms" << std::endl;
    }
    double time;
    std::string mes;
};