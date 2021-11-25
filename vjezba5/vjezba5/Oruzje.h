#pragma once
#include <iostream>
#include <string>
#include<vector>
using namespace std;
#include "tocka.h"


class Oruzje {
	Tocka polozaj;
	int magazine;
	int bullet;

public:
	void setPolozaj(double x, double y, double z);
	void getPolozaj(double *x, double *y, double *z);
	double getVisina();
	void set(int kapacitet);
	void get(int *kapacitet,int *metci);
	void shoot();
	void reload();
	int getstatus();
};