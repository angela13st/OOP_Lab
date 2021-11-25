
#include<stdlib.h>
#include <iostream>
#include <string>
#include "tocka.h"
#include<vector>
using namespace std;

void Tocka::set()
{
	x = 0;
	y = 0;
	z = 0;
}

void Tocka::set(double a, double b, double c)
{
	x = a;
	y = b;
	z = c;
}

void Tocka::setRandom(int min, int max)
{
	x = min + rand() % (max - min);
	y= min + rand() % (max - min);
	z= min + rand() % (max - min);
}
void Tocka::get(double *tx,double *ty, double *tz)
{
	*tx = x;
	*ty = y;
	*tz = z;
}
double Tocka::distance2d(Tocka t)
{
	return sqrt(pow((x - t.x), 2.0) + pow((y - t.y), 2.0));
}
double Tocka::distance3d(Tocka t)
{
	return sqrt(pow((x - t.x), 2.0) + pow((y - t.y), 2.0) + pow((z-t.z),2.0));
}

double Tocka::getx()
{
	return x;
}
double Tocka::gety()
{
	return y;
}
double Tocka::getz()
{
	return z;
}