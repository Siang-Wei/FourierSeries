// Fourier series_3.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip> 
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
	double pi=3.14,a;
	fstream file;
	file.open("Fourier series_3.txt",ios::out);
	if(file.fail())
		cout << "檔案無法開啟\n";
	else
	{
		for(double t=-50;t<50;t+=0.05){
			double n=1; //n是手動更改，每跑完一次迴圈就把值放進excel裡，再來就改n繼續跑.. 以此類推
			a=2*cos(n*6.28*t);//T=1，2*pi=6.28
			file << fixed << setprecision(5) << a << endl;
		}
	}
	file.close();
	return 0;
}