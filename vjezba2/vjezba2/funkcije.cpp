#include <iostream>
#include <cmath>
#include <algorithm> 
#include "funkcije.h"

using namespace std;

void unesi(int* niz, int size)
{
	std::cout << "Unesi brojeve: \n";

	for (int i = 0; i < size; i++)
	{

		std::cin >> niz[i];

	}
}
void ispisi(int* niz, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << niz[i] << " ";
	}
	std::cout << "\n";
}
void minmax(int* niz, int size, int& min, int& max)
{
	min = niz[0];
	max = niz[0];
	for (int i = 0; i < size; i++)
	{

		if (niz[i] < min)
		{
			min = niz[i];
		}
		if (niz[i] > max)
		{
			max = niz[i];
		}


	}

}

int sijekuSe(Pravokutnik pp[], Kruznica k)
{
	int s = 0;

	for (int i = 2; i--; i > 0)
	{

		int Xn = max(pp[i].doleLijevo.x, min(k.ishodiste.x, pp[i].goreDesno.x));
		int Yn = max(pp[i].doleLijevo.y, min(k.ishodiste.y, pp[i].goreDesno.y));

		int Dx = Xn - k.ishodiste.x;
		int Dy = Yn - k.ishodiste.y;

		if ((Dx * Dx + Dy * Dy) <= k.radius * k.radius)
		{
			s++;
		}
	}
	return s;
}