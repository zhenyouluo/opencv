/*************************************************************************
	> File Name: canny.cpp
	> Author: 陈庆战
	> Mail: zhan521999@126.com 
	> Created Time: 2016年05月25日 星期三 09时51分06秒
 ************************************************************************/

#include<iostream>
#include<opencv2/opencv.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;
int main()
{

Mat srcImage=imread("1.jpg");
imshow("边缘检测原图",srcImage);
Mat dstImage,edge,grayImage;
cvtColor(srcImage,grayImage,CV_BGR2GRAY);
imshow("灰度图",grayImage);
blur(grayImage,edge,Size(3,3));
Canny(edge,edge,3,9,3);
imshow("边缘检测",edge);
waitKey(0);


	return 0;
}
