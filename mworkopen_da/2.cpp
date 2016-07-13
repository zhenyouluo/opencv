/*************************************************************************
	> File Name: 2.cpp
	> Author: 陈庆战
	> Mail: zhan521999@126.com 
	> Created Time: 2016年05月24日 星期二 17时05分28秒
 ************************************************************************/
#include<iostream>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace std;
using namespace cv;
int main(){
Mat ss=imread("1.jpg");
imshow("原图",ss);
Mat ff=getStructuringElement(MORPH_CROSS,Size(15,15));
//imshow("get1",ff);
Mat hh;
erode(ss,hh,ff);
//imshow("get2",ff);
imshow("腐蚀",hh);
waitKey(0);
return 0;
}
