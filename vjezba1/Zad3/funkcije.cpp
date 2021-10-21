#include <iostream>

#include "funkcije.h"

using namespace std;

void minmax(int* niz)
{
	int min = 0;
	int max = 0;
	min = niz[0];
	max = niz[0];
	for (int i = 0; i < 10; i++)
	{
		if (niz[i] < min)
			min = niz[i];
		if (niz[i] > max)
			max = niz[i];
	}
	cout << "min: " << min << " max: " << max;
}