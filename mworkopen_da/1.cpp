#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;
int main()
{
Mat ss=imread("1.jpg",2|4);
Mat tem=Mat(20,30,CV_8UC3,Scalar(255,255,0));
imwrite("2.jpg",ss);
//Mat s_2=imread("2.jpg",2|4);
cout<<"tem="<<endl<<" "<<tem<<endl<<endl;
//imshow("2",s_2);
//ss.namedWindo("bbbbbb",WINDOW_NORMAL);
imshow("sadsa",tem);
waitKey(0);
return 0;
}

