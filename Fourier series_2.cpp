// Fourier series_2.cpp : �w�q�D���x���ε{�����i�J�I�C
//

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
		cout << "�ɮ׵L�k�}��\n";
	else
	{
		for(double t=-50;t<50;t+=0.05){
			double n=21; //n�O��ʧ��A�C�]���@���j��N��ȩ�iexcel�̡A�A�ӴN��n�~��].. �H������
			a=(8/pi/pi)*(1/n/n)*cos(n*pi*t/2); //T=4�A�]�g����2�A�ҥH�n��1/2
			file << fixed<< setprecision(5) << a << endl;
		}
	}
	file.close();
	return 0;
}