/*************************************************************************
	> File Name: createTracbar.cpp
	> Author: 陈庆战
	> Mail: zhan521999@126.com 
	> Created Time: 2016年05月26日 星期四 16时42分56秒
 ************************************************************************/

#include<iostream>

using namespace std;
#include<opencv2/opencv.hpp>
#include<stdio.h>
#define NAME_WINDOW "name_窗口"
#define NAME_TRACBAR "进度条"
using namespace cv;
const int mx=100;
int value;
double value_p1;
double	value_p2;
Mat str1;
Mat str4;
Mat	str2;
Mat	out_imag;
Mat new_jpg;
void on_click(int,void*){
	printf("sadsad on_click\n");
value_p1=(double)value/mx;
value_p2=(1.0 - value_p1);
addWeighted(str4,value_p1,str2,value_p2,0.,out_imag);
printf("trackbar count is  %d",getTrackbarPos(NAME_TRACBAR,NAME_WINDOW));
imshow(NAME_WINDOW,out_imag);
}
int main()
{
//Mat str1,str2,out_imag;
str1=imread("3.jpg",2|4);
str2=imread("2.jpg",2|4);
cout<<"str1"<<str1;
//new_jpg.create(str2.size(),str2.type());
//str1.copyTo(new_jpg);
//imwrite("4.jpg",new_jpg);
//imshow("asd",new_jpg);
value=70;
namedWindow(NAME_WINDOW,1);
//imshow(NAME_WINDOW,str1);
//imshow("sadas",str2);
str4=str1(Rect(0,0,str2.cols,str2.rows));
createTrackbar(NAME_TRACBAR,NAME_WINDOW,&value,mx,on_click);
//on_click(value,0);
//addWeighted(str1,0.5,str2,0.3,0.0,out_imag);
//imshow("111",out_imag);
//imshow("111",str4);

waitKey(0);
return 0;

}
