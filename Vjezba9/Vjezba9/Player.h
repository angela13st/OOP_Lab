#pragma once
#include<cstdlib>
#include<iostream>

class Player
{
protected:
	int sum;
	int playerPoints=0;
public:
	int getSum();
	void setPoints();
	int getPoints();
};

