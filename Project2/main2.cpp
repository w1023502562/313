#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main()
{
	Mat srcMat = imread("D:\\����.jpg");
	Mat greyMat, result1, result2;
	cvtColor(srcMat, greyMat, CV_BGR2GRAY);//ת��Ϊ�Ҷ�ͼ

	adaptiveThreshold(greyMat, result1, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);
	threshold(greyMat, result2, 100, 255, THRESH_BINARY);

	imshow("image1", result1);
	imshow("image2", result2);
	waitKey(0);
	return 0;
}