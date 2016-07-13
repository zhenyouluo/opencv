/*************************************************************************
	> File Name: video.cpp
	> Author: 陈庆战
	> Mail: zhan521999@126.com 
	> Created Time: 2016年05月25日 星期三 10时48分13秒
 ************************************************************************/
#include<stdio.h>
#include<string>
#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int g_nContrastValue; //对比度值
int g_nBrightValue;  //亮度值
Mat fram,fram2;
static void ContrastAndBright(int, void *);
int main()
{
VideoCapture capture;
capture.open(1);
/*if(capture ==NULL){
	cout<<"无设备";
}
*/
//设定对比度和亮度的初值
	g_nContrastValue=60;
	g_nBrightValue=80;
namedWindow("sa", 1);
//创建轨迹条
	//createTrackbar("1", "sa",&g_nContrastValue, 300,ContrastAndBright );
	//createTrackbar("2", "sa",&g_nBrightValue, 200,ContrastAndBright );
//调用回调函数
	//ContrastAndBright(g_nContrastValue,0);
	//ContrastAndBright(g_nBrightValue,0);
printf("sadsad %s\n",CV_VERSION);
Mat gray;
while(1){
	//Mat fram;
	capture.read(fram);
	fram2 = Mat::zeros(fram.size(), fram.type() );
	//imshow("当前图",fram);
	//cvtColor(fram,gray,CV_BGR2GRAY);
	//imshow("sa",gray);
//	createTrackbar("1", "sa",&g_nContrastValue, 300,ContrastAndBright );
//	createTrackbar("2", "sa",&g_nBrightValue, 200,ContrastAndBright );//blur(gray,gray,Size(7,7));
//	ContrastAndBright(g_nContrastValue,0);
		for( int y = 0; y < fram.rows; y++ )
	{
		for( int x = 0; x < fram.cols; x++ )
		{
			for( int c = 0; c < 3; c++ )
			{
			fram2.at<Vec3b>(y,x)[c] = saturate_cast<uchar>((g_nContrastValue*0.01)*(fram.at<Vec3b>(y,x)[c] ) + g_nBrightValue );
			}
		}
	}
ContrastAndBright(g_nBrightValue,0);//Canny(gray,gray,50,50);
	imshow("sa",fram2);
	if(waitKey(30)>=0) break;
}
capture.release();
waitKey(0);
return 0;
}
static void ContrastAndBright(int, void *)
{

	// 创建窗口
//namedWindow("sa", 1);

	// 三个for循环，执行运算 g_dstImage(i,j) = a*g_srcImage(i,j) + b
	for( int y = 0; y < fram.rows; y++ )
	{
		for( int x = 0; x < fram.cols; x++ )
		{
			for( int c = 0; c < 3; c++ )
			{
			fram2.at<Vec3b>(y,x)[c] = saturate_cast<uchar>((g_nContrastValue*0.01)*(fram.at<Vec3b>(y,x)[c] ) + g_nBrightValue );
			}
		}
	}

	// 显示图像
	//imshow("【原始图窗口】", g_srcImage);
	imshow("sa", fram2);
}


