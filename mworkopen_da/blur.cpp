/*************************************************************************
	> File Name: blur.cpp
	> Author: 陈庆战
	> Mail: zhan521999@126.com 
	> Created Time: 2016年05月24日 星期二 18时25分44秒
 ************************************************************************/

#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace std;                                                        
using namespace cv;
int main()
{
Mat yy=imread("1.jpg");
imshow("原图",yy);
Mat mm;
blur(yy,mm,Size(3,3));
imshow("模糊",mm);
waitKey(0);
return 0;
}
