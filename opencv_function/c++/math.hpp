#include<opencv.hpp>
//use general equation of a straight line
inline float getDistanceP2L1(cv::Point pointP, cv::Point pointA, cv::Point pointB)
{
    //求直线方程
    int A = 0, B = 0, C = 0;
    A = pointA.y - pointB.y;
    B = pointB.x - pointA.x;
    C = pointA.x * pointB.y - pointA.y * pointB.x;
    //代入点到直线距离公式
    float distance = 0;
    distance = (abs(A * pointP.x + B * pointP.y + C)) / (sqrtf((float)(A * A + B * B)));
    return distance;
}

/***** 点到直线的距离:P到AB的距离*****/
//P为线外一点，AB为线段两个端点
inline float getDistanceP2L(cv::Point pointP, cv::Point pointA, cv::Point pointB)
{
    //求直线方程
    float A = 0, B = 0, C = 0;
    A = static_cast<float>(pointA.y - pointB.y);
    B = static_cast<float>(pointB.x - pointA.x);
    C = static_cast<float>(pointA.x * pointB.y - pointA.y * pointB.x);
    //代入点到直线距离公式
    float distance = 0;
    distance = (abs(A * pointP.x + B * pointP.y + C)) / (sqrtf(A * A + B * B));
    return distance;
}
inline float getDistanceP2L(cv::Point2f pointP, cv::Point2f pointA, cv::Point2f pointB)
{
    //求直线方程
    float A = 0, B = 0, C = 0;
    A = pointA.y - pointB.y;
    B = pointB.x - pointA.x;
    C = pointA.x * pointB.y - pointA.y * pointB.x;
    //代入点到直线距离公式
    float distance = 0;
    distance = (abs(A * pointP.x + B * pointP.y + C)) / (sqrtf(A * A + B * B));
    return distance;
}


#if 0 //test code 

int main() {
    cv::Point p1(2, 3);
    cv::Point p2(0, 10);
    cv::Point p3(10, 0);
    float double1 = getDistanceP2L(p1, p2, p3);
    cv::Point2f p1_f(2, 3);
    cv::Point2f p2_f(0, 10);
    cv::Point2f p3_f(10, 0);
    float double2 = getDistanceP2L(p1_f, p2_f, p3_f);

}

#endif