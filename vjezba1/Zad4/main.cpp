#include<iostream>
#include"funkcije.h"

using namespace std;




int main()
{
	int vel = 5;
	int n;
	int najmanji;
	int najveci;
	int niz[10];
	for (int i = 0; i < 5; i++)
	{
		cout << "Unesi clan niza:";
		cin >> niz[i];
	}
	najmanji = niz[0];
	najveci = niz[0];
	minmax(niz, 0, vel, najmanji, najveci);
	cout << "najmanji je: " << najmanji;
	cout << " najveci je: " << najveci;

	return 0;

}
