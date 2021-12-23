#pragma once

#ifndef Timer_H
#define Timer_H

#include<iostream>
#include <algorithm>
#include"Timer.h"

const int conv = 60;

using namespace std;

class Timer
{
private:
	int h;
	int m;
	double s;
public:

	Timer();
	Timer(int, int, double);
	Timer operator/(int n);
	friend ostream& operator<< (ostream&, Timer&);
	friend Timer operator+(const Timer& n, const Timer& x);
	friend Timer operator-(const Timer& n, const Timer& x);
	Timer& operator+=(const Timer& n);
	Timer& operator-=(const Timer& n);
	Timer& operator/=(int n);
	friend bool operator<(const Timer& n, const Timer& x);
	operator double();
	inline double getS() { return s; };
	inline int getM() { return m; };
	void setS(double sec);
	void setM(int min);



};

class penalty
{
private:
	double penS;
public:
	penalty(double penaltyTime);
	void operator()(Timer& t) const;
};

#endif