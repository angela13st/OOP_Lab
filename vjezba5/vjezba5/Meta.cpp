#include "Meta.h"


void Meta::create()
{
	dl.setRandom(1, 5);
	gd.setRandom(5, 10);
}
bool Meta::ishit(double z)
{
	double pocvisina;
	double gvisina;
	gvisina = gd.gety();
	pocvisina = dl.gety();
	if (z > pocvisina && z < gvisina)
	{
		hit = true;
		//cout << "\nMeta je pogodena!";
	}
	else
	{
		hit = false;
		//cout << "\nMeta je nepogodena!";
	}
	return hit;
}

