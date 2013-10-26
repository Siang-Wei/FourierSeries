FourierSeries
=============

computer programming homework

##Fourier series_1

```
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
	file.open(" Fourier series_1.txt",ios::out);
	if(file.fail())
		cout << "檔案無法開啟\n";
	else
	{
		for(double t=-50;t<50;t+=0.05){
			double n=21; //n是手動更改，每跑完一次迴圈就把值放進excel裡，再來就改n繼續跑.. 以此類推
			a=((2/(n*pi))*sin(n*pi*t)); //A=1，T=2
			file << fixed << setprecision(5) << a << endl;
		}
	}
	file.close();
	return 0;
}
```
![image](https://github.com/Siang-Wei/FourierSeries/blob/master/Fourier%20series_%E7%AC%AC%E4%B8%80%E9%A1%8C%E6%B3%A2%E5%BD%A2%E5%9C%96.jpg "波形")

##Fourier series_2

```
#include "stdafx.h"
#include <iostream>
#include <iomanip> 
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
	//A=1
	double pi=3.14,a;
	fstream file;
	file.open("Fourier series_2.txt",ios::out);
	if(file.fail())
		cout << "檔案無法開啟\n";
	else
	{
		for(double t=-50;t<50;t+=0.05){
			double n=21; //n是手動更改，每跑完一次迴圈就把值放進excel裡，再來就改n繼續跑.. 以此類推
			a=(8/pi/pi)*(1/n/n)*cos(n*pi*t/2); //T=4，因週期少2，所以要乘1/2
			file << fixed<< setprecision(5) << a << endl;
		}
	}
	file.close();
	return 0;
}
```
[github](https://github.com/Siang-Wei/FourierSeries/blob/master/Fourier%20series_%E7%AC%AC%E4%BA%8C%E9%A1%8C%E6%B3%A2%E5%BD%A2%E5%9C%96.jpg)

##Fourier series_3

```
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
```
[github](https://github.com/Siang-Wei/FourierSeries/blob/master/Fourier%20series_%E7%AC%AC%E4%B8%89%E9%A1%8C%E6%B3%A2%E5%BD%A2%E5%9C%96.jpg)
