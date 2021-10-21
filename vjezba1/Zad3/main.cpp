#include<iostream>
#include "funkcije.h"

using namespace std;



void main()
{

	int niz[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Unesi clan niza:";
		cin >> niz[i];
	}

	minmax(niz);

}

