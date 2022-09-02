    printf("\nhello test\nget char:\n");
    cv::Mat src = cv::Mat::zeros(200, 300, CV_8UC1);
    cv::Mat dst;
    cv::threshold(src, dst, 0, 255, cv::THRESH_BINARY);
    printf("img w h    %d %d\n", src.cols, src.rows);
    cv::imwrite("test.png", dst);