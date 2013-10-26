// Fourier series_1.cpp : �w�q�D���x���ε{�����i�J�I�C
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
	file.open(" Fourier series_1.txt",ios::out);
	if(file.fail())
		cout << "�ɮ׵L�k�}��\n";
	else
	{
		for(double t=-50;t<50;t+=0.05){
			double n=21; //n�O��ʧ��A�C�]���@���j��N��ȩ�iexcel�̡A�A�ӴN��n�~��].. �H������
			a=((2/(n*pi))*sin(n*pi*t)); //A=1�AT=2
			file << fixed << setprecision(5) << a << endl;
		}
	}
	file.close();
	return 0;
}