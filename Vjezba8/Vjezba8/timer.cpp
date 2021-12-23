#include "Timer.h"

Timer::Timer()
{
	h = 0;
	m = 0;
	s = 0.0;
}

Timer::Timer(int hr, int min , double sec)
{
	h = hr;
	m = min;
	s = sec;
}

Timer Timer::operator/(int n)
{
	this->h = h / n;
	this->m = m / n;
	this->s = s / n;
	return *this;
	
}

Timer& Timer::operator+=(const Timer& n)
{
	this->h += n.h;
	this->m += n.m;
	this->s += n.s;
	
	if (this->s >= 60)
	{
		this->m = this->m + 1;
		this->s = this->s - 60;

		
	}
	if (this->m >= 60)
	{
		this->h = this->h + 1;
		this->m = this->m - 60;
	}
	
	return *this;
}

Timer& Timer::operator-=(const Timer& n)
{
	this->h -= n.h;
	this->m -= n.m;
	this->s -= n.s;

	return *this;
}

Timer& Timer::operator/=(int n)
{
	double tmp = 0;
	double ho = 0, min = 0;
	double sec = 0;
	
	tmp += this->s + this->m * conv + this->h * conv * conv;
	tmp = tmp / n;

	ho = tmp / (conv * conv);
	min = (ho - (int)ho)* conv;
	sec= (min - (int)min) * conv;
	
	this->h =(int)ho;
	this->m =(int)min;
	this->s =sec;

	return *this;
}


Timer::operator double()
{
	return s;
}

void Timer::setS(double sec)
{
	s = sec;
}

void Timer::setM(int min)
{
	m = min;
}


ostream& operator<<(ostream& os, Timer& time)
{
	os << time.h << ':' << time.m << ':' << time.s << endl;
	return os;
}

Timer operator+(const Timer& n, const Timer& x)
{
	Timer newTime;
	newTime.h = n.h + x.h;
	newTime.m = n.m + x.m;
	newTime.s = n.s + x.s;
	return newTime;
	
}

Timer operator-(const Timer& n, const Timer& x)
{
	Timer newTime;
	newTime.h = n.h - x.h;
	newTime.m = n.m - x.m;
	newTime.s = n.s - x.s;
	return newTime;
}

bool operator<(const Timer& n, const Timer& x)
{
	if (n.h < x.h)
		return true;
	else if (n.h == x.h && n.m < x.m)
		return true;
	else if (n.h == x.h && n.m == x.m && n.s<x.s)
		return true;

	return false;

}

penalty::penalty(double penaltyTime) : penS(penaltyTime) {}
void penalty::operator()(Timer& t) const
{
	double secs = t.getS();
	secs += penS;
	if (secs > 59.99)
	{
		int minu = t.getM();
		minu += secs / 60;
		secs = secs - 60;
		t.setM(minu);
	}
	t.setS(secs);
	
	

}