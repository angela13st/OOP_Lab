#pragma once
#include <iostream>
#include <string>
#include<vector>
using namespace std;



class Tocka {

	double x;
	double y;
	double z;
public:
	void set();
	void set(double x, double y, double z);
	void setRandom(int min,int max);
	void get(double* x, double* y, double* z);
	double distance2d(Tocka t);
	double distance3d(Tocka t);
	double getx();
	double gety();
	double getz();
};