
#include <iostream>
#include<string.h>
#include <vector>
#include<algorithm>
#include "funkcije.h"
using namespace std;
//zad1
/*
int main()
{
	int n=0;
	char checks, checkmm='n';
	int min = 0, max = 100;
	cout << "Zelite li sami odrediti velicinu \n y za da n za ne: ";
	cin >> checks;
	if (checks == 'y')
	{
		cout << "Unesite velicinu: ";
		cin >> n;

	}
	vector<int> niz;
	if (checks == 'n')
	{
		cout << "Zelite li sami odrediti granice \n y za da n za ne: ";
		cin >> checkmm;
		if (checkmm == 'y')
		{
			cout << "Unesite min: ";
			cin >> min;
			cout << "Unesite max: ";
			cin >> max;
		}
	}
	if (n>0)
	{
		input(niz, n);

	}
	if(n==0)
		input(niz, min, max);
	print(niz);

}
*/
//zad2
/*
int main()
{
	int n = 0;
	char checks, checkmm = 'n';
	int min = 0, max = 100;
	cout << "Zelite li sami odrediti velicinu \n y za da n za ne: ";
	cin >> checks;
	if (checks == 'y')
	{
		cout << "Unesite velicinu: ";
		cin >> n;

	}
	vector<int> niz1;
	if (checks == 'n')
	{
		cout << "Zelite li sami odrediti granice \n y za da n za ne: ";
		cin >> checkmm;
		if (checkmm == 'y')
		{
			cout << "Unesite min: ";
			cin >> min;
			cout << "Unesite max: ";
			cin >> max;
		}
	}
	if (n > 0)
	{
		input(niz1, n);

	}
	if (n == 0)
		input(niz1, min, max);
	print(niz1);

	n = 0;
	checks, checkmm = 'n';
	min = 0, max = 100;
	cout << "Zelite li sami odrediti velicinu \n y za da n za ne: ";
	cin >> checks;
	if (checks == 'y')
	{
		cout << "Unesite velicinu: ";
		cin >> n;

	}
	vector<int> niz2;
	if (checks == 'n')
	{
		cout << "Zelite li sami odrediti granice \n y za da n za ne: ";
		cin >> checkmm;
		if (checkmm == 'y')
		{
			cout << "Unesite min: ";
			cin >> min;
			cout << "Unesite max: ";
			cin >> max;
		}
	}
	if (n > 0)
	{
		input(niz2, n);

	}
	if (n == 0)
		input(niz2, min, max);
	print(niz2);
	
	vector<int> niz3;
	novi(niz1,niz2,niz3);
	print(niz3);

}*/

//Zad3
/*
int main()
{
	int n = 0;
	char checks, checkmm = 'n';
	int min = 0, max = 100;
	cout << "Zelite li sami odrediti velicinu \n y za da n za ne: ";
	cin >> checks;
	if (checks == 'y')
	{
		cout << "Unesite velicinu: ";
		cin >> n;

	}
	vector<int> niz;;
	if (checks == 'n')
	{
		cout << "Zelite li sami odrediti granice \n y za da n za ne: ";
		cin >> checkmm;
		if (checkmm == 'y')
		{
			cout << "Unesite min: ";
			cin >> min;
			cout << "Unesite max: ";
			cin >> max;
		}
	}
	if (n > 0)
	{
		input(niz, n);

	}
	if (n == 0)
		input(niz, min, max);
	print(niz);
	sortiran(niz);
	cout << "Sortirani niz je: ";
	print(niz);

}
*/

//zad4
/*
int main()
{
	int n = 0;
	cout << "Unesite velicinu niza: ";
	cin >> n;

	vector<int> niz;;
	input(niz, n);
	int index = 0;
	print(niz);
	
	cout << "Unesite index elementa kojeg zelite izbrisati: ";
	cin >> index;
	while (index >= niz.size())
	{
		cout << "na tom indexu ne postoji element unesite ponovno: ";
		cin >> index;
	}

	remove(niz, index);
	cout << "Niz uklonjenih elemenata je: ";
	print(niz);

}
*/

//zad5
/*
int main()
{
	int n=0;
	string str;
	string podstr;
	cout << "Unesi string:\n";
	cin >> str;
	cout << "Unesi podstring:\n";
	cin >> podstr;

	n = substr(str, podstr);
	cout << "Broj pojavljivanja podstringa je: " << n;
	return 0;
}*/

//Zad6
/*
int main()
{
	vector<string> strings;
	reversed(strings);
	for (int i = 0; i < strings.size(); i++)
	{
		cout << strings[i] << " ";

	}
	cout << "\n";
	return 0;
}
*/