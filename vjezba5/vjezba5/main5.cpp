#include <iostream>
#include <string>
#include "tocka.h"
#include<vector>
#include<random>
#include"Oruzje.h"
#include"Meta.h"

using namespace std;



void main()
{
	int n = 10;
	int count=0;
	srand(time(NULL));
	Tocka T1, T2;
	T1.setRandom(1,3);
	T2.set();
	cout << "2D: " << T1.distance2d(T2);
	cout << "\n3D: " << T1.distance3d(T2);

	vector<Meta> targets;
	Oruzje gun;
	gun.setPolozaj(2,3,4);
	gun.set(20);
	double z=gun.getVisina();
	for (int i = 0; i < n; i++)
	{
		Meta tmp;
		tmp.create();
		targets.push_back(tmp);
	}
	int i = 0;
	while (gun.getstatus() != 0 && i<n)
	{		
		gun.shoot();
		targets[i].ishit(z);
		i++;
	}

	for (int i = 0; i < n; i++)
	{
		//targets[i].ishit(z);
		if (targets[i].ishit(z) ==  true)
		{
			cout << "\nMeta je pogodena!";
			count++;
		}
	}

	cout << "\n jednim punjenjem pogodeno je " << count << "meta.";
}