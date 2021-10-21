#include <iostream>

#include "funkcije.h"

using namespace std;

void minmax(int niz[], int i, int vel, int& najmanji, int& najveci)
{

	if (niz[i] < najmanji)
	{
		najmanji = niz[i];
	}
	else if (niz[i] > najveci)
	{
		najveci = niz[i];
	}

	if (++i < vel)
	{
		minmax(niz, i, vel, najmanji, najveci);
	}
}