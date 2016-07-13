/*************************************************************************
	> File Name: 1.cpp
	> Author: 陈庆战
	> Mail: zhan521999@126.com 
	> Created Time: 2016年05月26日 星期四 16时07分52秒
 ************************************************************************/

#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()  
{  
	    Mat image1 = imread("1.jpg");  
		    Mat image2 = imread("2.jpg");  

			Mat result;  
					    //调用addWeighted函数  
					//	addWeighted(image1,0.7,image2,0.9,0.,result);  
			
					//利用它的重载函数可以简单的写为  
						            result= 0.7*image1+0.9*image2;  
				
									
									
									namedWindow("output");  
						                    imshow("output",result);  
						                        waitKey(0);  
						                            return 0;  
						                            } 
