#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv/highgui.h>
#include <opencv/cv.h>
#include <unistd.h>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{

	int a;

	cv::VideoCapture cap = cv::VideoCapture(0);// = VideoCapture(0);
	a = 1;

	while (a){
		if (cap.isOpened() > 0){ a = 0; }
		printf(".");
		usleep(200);
	}

	cv::Mat hello();
	cap.grab();
	sleep(2);
	cap.grab();

	cap.retrieve(hello);//dit is een dom ding bij toevoegen van deze komt de foutmelding
	return 0;
}