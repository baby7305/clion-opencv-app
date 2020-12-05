#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat srcImage = imread("../lianggongchunri_de_youyv-009.jpg");
    if (!srcImage.data) {
        std::cout << "Image not loaded";
        return -1;
    }
    namedWindow("[img]");
    imshow("[img]", srcImage);
    waitKey(0);
    return 0;
}