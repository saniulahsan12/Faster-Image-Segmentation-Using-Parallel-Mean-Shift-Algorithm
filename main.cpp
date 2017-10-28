#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/imgproc/imgproc_c.h"
#include<ppl.h>
#include <iostream>
#include <fstream>
#include <string>
#include "MeanShift.h"

using namespace cv;


int Operation1(char *input_image)
{
	IplImage *img = cvLoadImage(input_image,1);
	
	// Mean
	int **ilabels = new int *[img->height];
	for(int i=0;i<img->height;i++) ilabels[i] = new int [img->width];
	int regionCount = MeanShift1(img, ilabels);
	vector<int> color(regionCount);
	CvRNG rng= cvRNG(cvGetTickCount());
	for(int i=0;i<regionCount;i++)
		color[i] = cvRandInt(&rng);

	/*// Draw random color
	for(int i=0;i<img->height;i++)
		for(int j=0;j<img->width;j++)
		{ 
			int cl = ilabels[i][j];
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 0] = (color[cl])&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 1] = (color[cl]>>8)&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 2] = (color[cl]>>16)&255;
		}

	cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
	cvShowImage("MeanShift",img);

	//cvWaitKey(1000);

	cvDestroyWindow("MeanShift");

	cvReleaseImage(&img);*/

	return 0;
}


int Operation2(char *input_image)
{
	IplImage *img = cvLoadImage(input_image,1);
	
	// Mean shift
	int **ilabels = new int *[img->height];
	for(int i=0;i<img->height;i++) ilabels[i] = new int [img->width];
	int regionCount = MeanShift2(img, ilabels);
	vector<int> color(regionCount);
	CvRNG rng= cvRNG(cvGetTickCount());
	for(int i=0;i<regionCount;i++)
		color[i] = cvRandInt(&rng);

	/*// Draw random color
	for(int i=0;i<img->height;i++)
		for(int j=0;j<img->width;j++)
		{ 
			int cl = ilabels[i][j];
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 0] = (color[cl])&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 1] = (color[cl]>>8)&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 2] = (color[cl]>>16)&255;
		}

	cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
	cvShowImage("MeanShift",img);

	//cvWaitKey(1000);

	cvDestroyWindow("MeanShift");

	cvReleaseImage(&img);*/

	return 0;
}

int Operation3(char *input_image)
{
	IplImage *img = cvLoadImage(input_image,1);
	
	// Mean shift
	int **ilabels = new int *[img->height];
	for(int i=0;i<img->height;i++) ilabels[i] = new int [img->width];
	int regionCount = MeanShift3(img, ilabels);
	vector<int> color(regionCount);
	CvRNG rng= cvRNG(cvGetTickCount());
	for(int i=0;i<regionCount;i++)
		color[i] = cvRandInt(&rng);

	/*// Draw random color
	for(int i=0;i<img->height;i++)
		for(int j=0;j<img->width;j++)
		{ 
			int cl = ilabels[i][j];
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 0] = (color[cl])&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 1] = (color[cl]>>8)&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 2] = (color[cl]>>16)&255;
		}

	cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
	cvShowImage("MeanShift",img);

	//cvWaitKey(1000);

	cvDestroyWindow("MeanShift");

	cvReleaseImage(&img);*/

	return 0;
}

int Operation4(char *input_image)
{
	IplImage *img = cvLoadImage(input_image,1);
	
	// Mean shift
	int **ilabels = new int *[img->height];
	for(int i=0;i<img->height;i++) ilabels[i] = new int [img->width];
	int regionCount = MeanShift4(img, ilabels);
	vector<int> color(regionCount);
	CvRNG rng= cvRNG(cvGetTickCount());
	for(int i=0;i<regionCount;i++)
		color[i] = cvRandInt(&rng);

	/*// Draw random color
	for(int i=0;i<img->height;i++)
		for(int j=0;j<img->width;j++)
		{ 
			int cl = ilabels[i][j];
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 0] = (color[cl])&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 1] = (color[cl]>>8)&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 2] = (color[cl]>>16)&255;
		}

	cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
	cvShowImage("MeanShift",img);

	//cvWaitKey(1000);

	cvDestroyWindow("MeanShift");

	cvReleaseImage(&img);*/

	return 0;
}

int Operation5(char *input_image)
{
	IplImage *img = cvLoadImage(input_image,1);
	
	// Mean shift
	int **ilabels = new int *[img->height];
	for(int i=0;i<img->height;i++) ilabels[i] = new int [img->width];
	int regionCount = MeanShift5(img, ilabels);
	vector<int> color(regionCount);
	CvRNG rng= cvRNG(cvGetTickCount());
	for(int i=0;i<regionCount;i++)
		color[i] = cvRandInt(&rng);

	/*// Draw random color
	for(int i=0;i<img->height;i++)
		for(int j=0;j<img->width;j++)
		{ 
			int cl = ilabels[i][j];
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 0] = (color[cl])&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 1] = (color[cl]>>8)&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 2] = (color[cl]>>16)&255;
		}

	cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
	cvShowImage("MeanShift",img);

	//cvWaitKey(1000);

	cvDestroyWindow("MeanShift");

	cvReleaseImage(&img);*/

	return 0;
}

int Operation6(char *input_image)
{
	IplImage *img = cvLoadImage(input_image,1);
	
	// Mean shift
	int **ilabels = new int *[img->height];
	for(int i=0;i<img->height;i++) ilabels[i] = new int [img->width];
	int regionCount = MeanShift6(img, ilabels);
	vector<int> color(regionCount);
	CvRNG rng= cvRNG(cvGetTickCount());
	for(int i=0;i<regionCount;i++)
		color[i] = cvRandInt(&rng);

	/*// Draw random color
	for(int i=0;i<img->height;i++)
		for(int j=0;j<img->width;j++)
		{ 
			int cl = ilabels[i][j];
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 0] = (color[cl])&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 1] = (color[cl]>>8)&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 2] = (color[cl]>>16)&255;
		}

	cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
	cvShowImage("MeanShift",img);

	//cvWaitKey(1000);

	cvDestroyWindow("MeanShift");

	cvReleaseImage(&img);*/

	return 0;
}

int Operation7(char *input_image)
{
	IplImage *img = cvLoadImage(input_image,1);
	
	// Mean shift
	int **ilabels = new int *[img->height];
	for(int i=0;i<img->height;i++) ilabels[i] = new int [img->width];
	int regionCount = MeanShift7(img, ilabels);
	vector<int> color(regionCount);
	CvRNG rng= cvRNG(cvGetTickCount());
	for(int i=0;i<regionCount;i++)
		color[i] = cvRandInt(&rng);

	/*// Draw random color
	for(int i=0;i<img->height;i++)
		for(int j=0;j<img->width;j++)
		{ 
			int cl = ilabels[i][j];
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 0] = (color[cl])&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 1] = (color[cl]>>8)&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 2] = (color[cl]>>16)&255;
		}

	cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
	cvShowImage("MeanShift",img);

	//cvWaitKey(1000);

	cvDestroyWindow("MeanShift");

	cvReleaseImage(&img);*/

	return 0;
}

int Operation8(char *input_image)
{
	IplImage *img = cvLoadImage(input_image,1);
	
	// Mean shift
	int **ilabels = new int *[img->height];
	for(int i=0;i<img->height;i++) ilabels[i] = new int [img->width];
	int regionCount = MeanShift8(img, ilabels);
	vector<int> color(regionCount);
	CvRNG rng= cvRNG(cvGetTickCount());
	for(int i=0;i<regionCount;i++)
		color[i] = cvRandInt(&rng);

	/*// Draw random color
	for(int i=0;i<img->height;i++)
		for(int j=0;j<img->width;j++)
		{ 
			int cl = ilabels[i][j];
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 0] = (color[cl])&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 1] = (color[cl]>>8)&255;
			((uchar *)(img->imageData + i*img->widthStep))[j*img->nChannels + 2] = (color[cl]>>16)&255;
		}

	cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
	cvShowImage("MeanShift",img);

	//cvWaitKey(1000);

	cvDestroyWindow("MeanShift");

	cvReleaseImage(&img);*/

	return 0;
}

int main(int argc, char* argv[])
{
	
	using namespace std;
	using namespace Concurrency;
	
	DECLARE_TIMING(timer);
	START_TIMING(timer);

	SYSTEM_INFO sysinfo;
	GetSystemInfo( &sysinfo );
	int numCPU;
	
	numCPU = sysinfo.dwNumberOfProcessors;
	cout<<numCPU<<" "<<"Active CPU "<<endl;



	IplImage* img= cvLoadImage("input.png");
	char img_name[10];	
	int img_serial=1;


	CvRect roi;
	CvSize size;
	int r, c,i=0;

	if(numCPU==1)
	{
		Operation1("input.png");

		//wcout << "  Cancelled: " << tg.is_canceling() << endl;
		STOP_TIMING(timer);
		std::cout<<"Mean Shift(ms):"<<GET_TIMING(timer)<<std::endl;
		//ofstream outputFile;
		//outputFile.open("output.txt");
		//outputFile <<numCPU<<" "<<"Active CPU "<< endl;
		//outputFile << GET_TIMING(timer) << endl;
		//outputFile.close();
		cout << "Done!\n";
	}

	if(numCPU==2)
	{	
	
	size = cvGetSize(img);
	for (r = 0; r < size.height; r += 512)
		for (c = 0; c < size.width; c += 256)
		{
			roi.x = c;
			roi.y = r;
			roi.width = (c + 256 > size.width) ? (size.width - c) : 256;
			roi.height = (r + 512 > size.height) ? (size.height - r) : 512;

			cvSetImageROI(img, roi);
			cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
			cvShowImage("MeanShift",img);
			//cvWaitKey(1000);
			IplImage *tobeshow = cvCreateImage(cvGetSize(img),img->depth,img->nChannels);
			IplImage *result = cvCreateImage(cvGetSize(img),img->depth,img->nChannels);
			cvCvtColor(img, result, CV_RGB2Lab);
			cvCvtColor(result, tobeshow, CV_Lab2RGB);
			sprintf (img_name, "temp%d", img_serial);
			strcat(img_name,".png");

			cvSaveImage(img_name, tobeshow);
			//cvReleaseImage(&tobeshow);
			img_serial++;
		}

	

		task_group tg;
		
		parallel_invoke( 
		[](){ Operation1("temp1.png");}, 
		[](){ Operation2("temp2.png");},
		[&tg](){ tg.cancel();});

		
		IplImage* img1 = cvLoadImage( "filtered1.png" );
		IplImage* img2 = cvLoadImage( "filtered2.png" );
		int dstWidth=img1->width+img2->width;
		int dstHeight=img1->height;//+img1->height;

		IplImage* dst=cvCreateImage(cvSize(dstWidth,dstHeight),IPL_DEPTH_8U,3); 

		// Copy first image to dst
		cvSetImageROI(dst, cvRect(0, 0,img1->width,img1->height) );
		cvCopy(img1,dst,NULL);
		cvResetImageROI(dst);

		// Copy second image to dst
		cvSetImageROI(dst, cvRect(img2->width, 0,img2->width,img2->height) );
		cvCopy(img2,dst,NULL);
		cvResetImageROI(dst);
		//show all in a single window
		cvNamedWindow( "Final", CV_WINDOW_AUTOSIZE );
		cvShowImage( "Final", dst );
		//cvWaitKey(1000);
		IplImage *tobeshow = cvCreateImage(cvGetSize(dst),dst->depth,dst->nChannels);
		IplImage *result = cvCreateImage(cvGetSize(dst),dst->depth,dst->nChannels);
		cvCvtColor(dst, result, CV_RGB2Lab);
		cvCvtColor(result, tobeshow, CV_Lab2RGB);
		sprintf (img_name, "Final");
		strcat(img_name,".png");
		cvSaveImage(img_name, tobeshow);
		//cvReleaseImage(&tobeshow);
		remove("temp1.png");
		remove("temp2.png");
		remove("filtered1.png");
		remove("filtered2.png");
		

		//wcout << "  Cancelled: " << tg.is_canceling() << endl;
		STOP_TIMING(timer);
		std::cout<<"Mean Shift(ms):"<<GET_TIMING(timer)<<std::endl;
		//ofstream outputFile;
		//outputFile.open("output.txt");
		//outputFile <<numCPU<<" "<<"Active CPU "<< endl;
		//outputFile << GET_TIMING(timer) << endl;
		//outputFile.close();
		cout << "Done!\n";
		

		
	}


	if(numCPU==3)
	{	
	
	size = cvGetSize(img);
	for (r = 0; r < size.height; r += 512)
		for (c = 0; c < size.width; c += 170)
		{
			roi.x = c;
			roi.y = r;
			roi.width = (c + 170 > size.width) ? (size.width - c) : 170;
			roi.height = (r + 512 > size.height) ? (size.height - r) : 512;

			cvSetImageROI(img, roi);
			cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
			cvShowImage("MeanShift",img);
			//cvWaitKey(1000);
			IplImage *tobeshow = cvCreateImage(cvGetSize(img),img->depth,img->nChannels);
			IplImage *result = cvCreateImage(cvGetSize(img),img->depth,img->nChannels);
			cvCvtColor(img, result, CV_RGB2Lab);
			cvCvtColor(result, tobeshow, CV_Lab2RGB);
			sprintf (img_name, "temp%d", img_serial);
			strcat(img_name,".png");

			cvSaveImage(img_name, tobeshow);
			//cvReleaseImage(&tobeshow);
			img_serial++;
		}

	

		task_group tg;
		
		parallel_invoke( 
		[](){ Operation1("temp1.png");}, 
		[](){ Operation2("temp2.png");},
		[](){ Operation3("temp3.png");},
		[](){ Operation4("temp4.png");},
		[&tg](){ tg.cancel();});

		
		IplImage* img1 = cvLoadImage( "filtered1.png" );
		IplImage* img2 = cvLoadImage( "filtered2.png" );
		IplImage* img3 = cvLoadImage( "filtered3.png" );
		IplImage* img4 = cvLoadImage( "filtered4.png" );
		int dstWidth=img1->width+img2->width+img3->width+img4->width;
		int dstHeight=img1->height;//+img1->height;

		IplImage* dst=cvCreateImage(cvSize(dstWidth,dstHeight),IPL_DEPTH_8U,3); 

		// Copy first image to dst
		cvSetImageROI(dst, cvRect(0, 0,img1->width,img1->height) );
		cvCopy(img1,dst,NULL);
		cvResetImageROI(dst);

		// Copy second image to dst
		cvSetImageROI(dst, cvRect(img2->width, 0,img2->width,img2->height) );
		cvCopy(img2,dst,NULL);
		cvResetImageROI(dst);
		// Copy third image to dst
		cvSetImageROI(dst, cvRect(img2->width+img3->width, 0,img3->width,img3->height) );
		cvCopy(img3,dst,NULL);
		cvResetImageROI(dst);
		// Copy fourth image to dst
		cvSetImageROI(dst, cvRect(img1->width+img2->width+img3->width, 0,img4->width,img4->height) );
		cvCopy(img4,dst,NULL);
		cvResetImageROI(dst);
		//show all in a single window
		cvNamedWindow( "Final", CV_WINDOW_AUTOSIZE );
		cvShowImage( "Final", dst );
		//cvWaitKey(1000);
		IplImage *tobeshow = cvCreateImage(cvGetSize(dst),dst->depth,dst->nChannels);
		IplImage *result = cvCreateImage(cvGetSize(dst),dst->depth,dst->nChannels);
		cvCvtColor(dst, result, CV_RGB2Lab);
		cvCvtColor(result, tobeshow, CV_Lab2RGB);
		sprintf (img_name, "Final");
		strcat(img_name,".png");
		cvSaveImage(img_name, tobeshow);
		//cvReleaseImage(&tobeshow);
		remove("temp1.png");
		remove("temp2.png");
		remove("temp3.png");
		remove("temp4.png");
		remove("filtered1.png");
		remove("filtered2.png");
		remove("filtered3.png");
		remove("filtered4.png");
		

		//wcout << "  Cancelled: " << tg.is_canceling() << endl;
		STOP_TIMING(timer);
		std::cout<<"Mean Shift(ms):"<<GET_TIMING(timer)<<std::endl;
		//ofstream outputFile;
		//outputFile.open("output.txt");
		//outputFile <<numCPU<<" "<<"Active CPU "<< endl;
		//outputFile << GET_TIMING(timer) << endl;
		//outputFile.close();
		cout << "Done!\n";
		

		
	}


	if(numCPU==4)
	{	
	
	size = cvGetSize(img);
	for (r = 0; r < size.height; r += 512)
		for (c = 0; c < size.width; c += 128)
		{
			roi.x = c;
			roi.y = r;
			roi.width = (c + 128 > size.width) ? (size.width - c) : 128;
			roi.height = (r + 512 > size.height) ? (size.height - r) : 512;

			cvSetImageROI(img, roi);
			cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
			cvShowImage("MeanShift",img);
			//cvWaitKey(1000);
			IplImage *tobeshow = cvCreateImage(cvGetSize(img),img->depth,img->nChannels);
			IplImage *result = cvCreateImage(cvGetSize(img),img->depth,img->nChannels);
			cvCvtColor(img, result, CV_RGB2Lab);
			cvCvtColor(result, tobeshow, CV_Lab2RGB);
			sprintf (img_name, "temp%d", img_serial);
			strcat(img_name,".png");

			cvSaveImage(img_name, tobeshow);
			//cvReleaseImage(&tobeshow);
			img_serial++;
		}

	

		task_group tg;
		
		parallel_invoke( 
		[](){ Operation1("temp1.png");}, 
		[](){ Operation2("temp2.png");},
		[](){ Operation3("temp3.png");},
		[](){ Operation4("temp4.png");},
		[&tg](){ tg.cancel();});

		
		IplImage* img1 = cvLoadImage( "filtered1.png" );
		IplImage* img2 = cvLoadImage( "filtered2.png" );
		IplImage* img3 = cvLoadImage( "filtered3.png" );
		IplImage* img4 = cvLoadImage( "filtered4.png" );
		int dstWidth=img1->width+img2->width+img3->width+img4->width;
		int dstHeight=img1->height;//+img1->height;

		IplImage* dst=cvCreateImage(cvSize(dstWidth,dstHeight),IPL_DEPTH_8U,3); 

		// Copy first image to dst
		cvSetImageROI(dst, cvRect(0, 0,img1->width,img1->height) );
		cvCopy(img1,dst,NULL);
		cvResetImageROI(dst);

		// Copy second image to dst
		cvSetImageROI(dst, cvRect(img2->width, 0,img2->width,img2->height) );
		cvCopy(img2,dst,NULL);
		cvResetImageROI(dst);
		// Copy third image to dst
		cvSetImageROI(dst, cvRect(img2->width+img3->width, 0,img3->width,img3->height) );
		cvCopy(img3,dst,NULL);
		cvResetImageROI(dst);
		// Copy fourth image to dst
		cvSetImageROI(dst, cvRect(img1->width+img2->width+img3->width, 0,img4->width,img4->height) );
		cvCopy(img4,dst,NULL);
		cvResetImageROI(dst);
		//show all in a single window
		cvNamedWindow( "Final", CV_WINDOW_AUTOSIZE );
		cvShowImage( "Final", dst );
		//cvWaitKey(1000);
		IplImage *tobeshow = cvCreateImage(cvGetSize(dst),dst->depth,dst->nChannels);
		IplImage *result = cvCreateImage(cvGetSize(dst),dst->depth,dst->nChannels);
		cvCvtColor(dst, result, CV_RGB2Lab);
		cvCvtColor(result, tobeshow, CV_Lab2RGB);
		sprintf (img_name, "Final");
		strcat(img_name,".png");
		cvSaveImage(img_name, tobeshow);
		//cvReleaseImage(&tobeshow);
		remove("temp1.png");
		remove("temp2.png");
		remove("temp3.png");
		remove("temp4.png");
		remove("filtered1.png");
		remove("filtered2.png");
		remove("filtered3.png");
		remove("filtered4.png");
		

		//wcout << "  Cancelled: " << tg.is_canceling() << endl;
		STOP_TIMING(timer);
		std::cout<<"Mean Shift(ms):"<<GET_TIMING(timer)<<std::endl;
		//ofstream outputFile;
		//outputFile.open("output.txt");
		//outputFile <<numCPU<<" "<<"Active CPU "<< endl;
		//outputFile << GET_TIMING(timer) << endl;
		//outputFile.close();
		cout << "Done!\n";
		

		
	}

	if(numCPU==5)
	{	
	
	size = cvGetSize(img);
	for (r = 0; r < size.height; r += 512)
		for (c = 0; c < size.width; c += 102)
		{
			roi.x = c;
			roi.y = r;
			roi.width = (c + 102 > size.width) ? (size.width - c) : 102;
			roi.height = (r + 512 > size.height) ? (size.height - r) : 512;

			cvSetImageROI(img, roi);
			cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
			cvShowImage("MeanShift",img);
			//cvWaitKey(1000);
			IplImage *tobeshow = cvCreateImage(cvGetSize(img),img->depth,img->nChannels);
			IplImage *result = cvCreateImage(cvGetSize(img),img->depth,img->nChannels);
			cvCvtColor(img, result, CV_RGB2Lab);
			cvCvtColor(result, tobeshow, CV_Lab2RGB);
			sprintf (img_name, "temp%d", img_serial);
			strcat(img_name,".png");

			cvSaveImage(img_name, tobeshow);
			//cvReleaseImage(&tobeshow);
			img_serial++;
		}

	

		task_group tg;
		
		parallel_invoke( 
		[](){ Operation1("temp1.png");}, 
		[](){ Operation2("temp2.png");},
		[](){ Operation3("temp3.png");},
		[](){ Operation4("temp4.png");},
		[](){ Operation5("temp5.png");},
		[](){ Operation6("temp6.png");},
		[&tg](){ tg.cancel();});

		
		IplImage* img1 = cvLoadImage( "filtered1.png" );
		IplImage* img2 = cvLoadImage( "filtered2.png" );
		IplImage* img3 = cvLoadImage( "filtered3.png" );
		IplImage* img4 = cvLoadImage( "filtered4.png" );
		IplImage* img5 = cvLoadImage( "filtered5.png" );
		IplImage* img6 = cvLoadImage( "filtered6.png" );
		int dstWidth=img1->width+img2->width+img3->width+img4->width+img5->width+img6->width;
		int dstHeight=img1->height;//+img1->height;

		IplImage* dst=cvCreateImage(cvSize(dstWidth,dstHeight),IPL_DEPTH_8U,3); 

		// Copy first image to dst
		cvSetImageROI(dst, cvRect(0, 0,img1->width,img1->height) );
		cvCopy(img1,dst,NULL);
		cvResetImageROI(dst);

		// Copy second image to dst
		cvSetImageROI(dst, cvRect(img2->width, 0,img2->width,img2->height) );
		cvCopy(img2,dst,NULL);
		cvResetImageROI(dst);
		// Copy third image to dst
		cvSetImageROI(dst, cvRect(img2->width+img3->width, 0,img3->width,img3->height) );
		cvCopy(img3,dst,NULL);
		cvResetImageROI(dst);
		// Copy fourth image to dst
		cvSetImageROI(dst, cvRect(img2->width+img3->width+img4->width, 0,img4->width,img4->height) );
		cvCopy(img4,dst,NULL);
		cvResetImageROI(dst);
		// Copy fifth image to dst
		cvSetImageROI(dst, cvRect(img2->width+img3->width+img4->width+img5->width, 0,img5->width,img5->height) );
		cvCopy(img5,dst,NULL);
		cvResetImageROI(dst);
		// Copy sixth image to dst
		cvSetImageROI(dst, cvRect(img1->width+img2->width+img3->width+img4->width+img5->width, 0,img6->width,img6->height) );
		cvCopy(img6,dst,NULL);
		cvResetImageROI(dst);
		//show all in a single window
		cvNamedWindow( "Final", CV_WINDOW_AUTOSIZE );
		cvShowImage( "Final", dst );
		//cvWaitKey(1000);
		IplImage *tobeshow = cvCreateImage(cvGetSize(dst),dst->depth,dst->nChannels);
		IplImage *result = cvCreateImage(cvGetSize(dst),dst->depth,dst->nChannels);
		cvCvtColor(dst, result, CV_RGB2Lab);
		cvCvtColor(result, tobeshow, CV_Lab2RGB);
		sprintf (img_name, "Final");
		strcat(img_name,".png");
		cvSaveImage(img_name, tobeshow);
		//cvReleaseImage(&tobeshow);
		remove("temp1.png");
		remove("temp2.png");
		remove("temp3.png");
		remove("temp4.png");
		remove("temp5.png");
		remove("temp6.png");
		remove("filtered1.png");
		remove("filtered2.png");
		remove("filtered3.png");
		remove("filtered4.png");
		remove("filtered5.png");
		remove("filtered6.png");
		

		//wcout << "  Cancelled: " << tg.is_canceling() << endl;
		STOP_TIMING(timer);
		std::cout<<"Mean Shift(ms):"<<GET_TIMING(timer)<<std::endl;
		//ofstream outputFile;
		//outputFile.open("output.txt");
		//outputFile <<numCPU<<" "<<"Active CPU "<< endl;
		//outputFile << GET_TIMING(timer) << endl;
		//outputFile.close();
		cout << "Done!\n";
		

		
	}

	if(numCPU==7)
	{	
	
	size = cvGetSize(img);
	for (r = 0; r < size.height; r += 512)
		for (c = 0; c < size.width; c += 73)
		{
			roi.x = c;
			roi.y = r;
			roi.width = (c + 73 > size.width) ? (size.width - c) : 73;
			roi.height = (r + 512 > size.height) ? (size.height - r) : 512;

			cvSetImageROI(img, roi);
			cvNamedWindow("MeanShift",CV_WINDOW_AUTOSIZE);
			cvShowImage("MeanShift",img);
			//cvWaitKey(1000);
			IplImage *tobeshow = cvCreateImage(cvGetSize(img),img->depth,img->nChannels);
			IplImage *result = cvCreateImage(cvGetSize(img),img->depth,img->nChannels);
			cvCvtColor(img, result, CV_RGB2Lab);
			cvCvtColor(result, tobeshow, CV_Lab2RGB);
			sprintf (img_name, "temp%d", img_serial);
			strcat(img_name,".png");

			cvSaveImage(img_name, tobeshow);
			//cvReleaseImage(&tobeshow);
			img_serial++;
		}

	

		task_group tg;
		
		parallel_invoke( 
		[](){ Operation1("temp1.png");}, 
		[](){ Operation2("temp2.png");},
		[](){ Operation3("temp3.png");},
		[](){ Operation4("temp4.png");},
		[](){ Operation5("temp5.png");},
		[](){ Operation6("temp6.png");},
		[](){ Operation7("temp7.png");},
		[](){ Operation8("temp8.png");},
		[&tg](){ tg.cancel();});

		
		IplImage* img1 = cvLoadImage( "filtered1.png" );
		IplImage* img2 = cvLoadImage( "filtered2.png" );
		IplImage* img3 = cvLoadImage( "filtered3.png" );
		IplImage* img4 = cvLoadImage( "filtered4.png" );
		IplImage* img5 = cvLoadImage( "filtered5.png" );
		IplImage* img6 = cvLoadImage( "filtered6.png" );
		IplImage* img7 = cvLoadImage( "filtered7.png" );
		IplImage* img8 = cvLoadImage( "filtered8.png" );
		int dstWidth=img1->width+img2->width+img3->width+img4->width+img5->width+img6->width+img7->width+img8->width;
		int dstHeight=img1->height;//+img1->height;

		IplImage* dst=cvCreateImage(cvSize(dstWidth,dstHeight),IPL_DEPTH_8U,3); 

		// Copy first image to dst
		cvSetImageROI(dst, cvRect(0, 0,img1->width,img1->height) );
		cvCopy(img1,dst,NULL);
		cvResetImageROI(dst);

		// Copy second image to dst
		cvSetImageROI(dst, cvRect(img2->width, 0,img2->width,img2->height) );
		cvCopy(img2,dst,NULL);
		cvResetImageROI(dst);
		// Copy third image to dst
		cvSetImageROI(dst, cvRect(img2->width+img3->width, 0,img3->width,img3->height) );
		cvCopy(img3,dst,NULL);
		cvResetImageROI(dst);
		// Copy fourth image to dst
		cvSetImageROI(dst, cvRect(img2->width+img3->width+img4->width, 0,img4->width,img4->height) );
		cvCopy(img4,dst,NULL);
		cvResetImageROI(dst);
		// Copy fifth image to dst
		cvSetImageROI(dst, cvRect(img2->width+img3->width+img4->width+img5->width, 0,img5->width,img5->height) );
		cvCopy(img5,dst,NULL);
		cvResetImageROI(dst);
		// Copy sixth image to dst
		cvSetImageROI(dst, cvRect(img2->width+img3->width+img4->width+img5->width+img6->width, 0,img6->width,img6->height) );
		cvCopy(img6,dst,NULL);
		cvResetImageROI(dst);
		// Copy seventh image to dst
		cvSetImageROI(dst, cvRect(img2->width+img3->width+img4->width+img5->width+img6->width+img7->width, 0,img7->width,img7->height) );
		cvCopy(img7,dst,NULL);
		cvResetImageROI(dst);
		// Copy eighth image to dst
		cvSetImageROI(dst, cvRect(img2->width+img3->width+img4->width+img5->width+img6->width+img7->width+img1->width, 0,img8->width,img8->height) );
		cvCopy(img8,dst,NULL);
		cvResetImageROI(dst);
		//show all in a single window
		cvNamedWindow( "Final", CV_WINDOW_AUTOSIZE );
		cvShowImage( "Final", dst );
		//cvWaitKey(1000);
		IplImage *tobeshow = cvCreateImage(cvGetSize(dst),dst->depth,dst->nChannels);
		IplImage *result = cvCreateImage(cvGetSize(dst),dst->depth,dst->nChannels);
		cvCvtColor(dst, result, CV_RGB2Lab);
		cvCvtColor(result, tobeshow, CV_Lab2RGB);
		sprintf (img_name, "Final");
		strcat(img_name,".png");
		cvSaveImage(img_name, tobeshow);
		//cvReleaseImage(&tobeshow);
		remove("temp1.png");
		remove("temp2.png");
		remove("temp3.png");
		remove("temp4.png");
		remove("temp5.png");
		remove("temp6.png");
		remove("temp7.png");
		remove("temp8.png");
		remove("filtered1.png");
		remove("filtered2.png");
		remove("filtered3.png");
		remove("filtered4.png");
		remove("filtered5.png");
		remove("filtered6.png");
		remove("filtered7.png");
		remove("filtered8.png");
		

		//wcout << "  Cancelled: " << tg.is_canceling() << endl;
		STOP_TIMING(timer);
		std::cout<<"Mean Shift(ms):"<<GET_TIMING(timer)<<std::endl;
		//ofstream outputFile;
		//outputFile.open("output.txt");
		//outputFile <<numCPU<<" "<<"Active CPU "<< endl;
		//outputFile << GET_TIMING(timer) << endl;
		//outputFile.close();
		cout << "Done!\n";
		

		
	}

	 
	
	return 0;
}