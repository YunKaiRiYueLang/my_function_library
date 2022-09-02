int main()
{
    cv::String patter = "./imgs";
    std::vector<cv::String> pathes;
    cv::glob(patter, pathes, false);
    for (int i = 0; i < pathes.size(); i++)
    {
        printf("%s\n", pathes[i].c_str());
        cv::String path = pathes[i];
        cv::Mat src = cv::imread(path);
        if (src.data == NULL)
        {
            continue;
        }
        printf("src w h %d %d\n", src.cols, src.rows);
    }
    exit(0);
}