// Fourier series_3.cpp : �w�q�D���x���ε{�����i�J�I�C
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
		cout << "�ɮ׵L�k�}��\n";
	else
	{
		for(double t=-50;t<50;t+=0.05){
			double n=1; //n�O��ʧ��A�C�]���@���j��N��ȩ�iexcel�̡A�A�ӴN��n�~��].. �H������
			a=2*cos(n*6.28*t);//T=1�A2*pi=6.28
			file << fixed << setprecision(5) << a << endl;
		}
	}
	file.close();
	return 0;
}