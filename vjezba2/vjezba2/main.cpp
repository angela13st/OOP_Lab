#include <iostream>
#include <cmath>
#include <algorithm> 
#include "funkcije.h"
#include "vector.h"

/* Zad1
int main()
{

	int size = 0;
	int min = 0;
	int max = 0;
	std::cout << "Unesi velicinu niza: ";

	std::cin >> size;

	int* niz = new int[size];

	unesi(niz, size);
	ispisi(niz, size);
	minmax(niz, size, min, max);

	std::cout << "Min: "<< min<<" Max: "<<max;

	delete[] niz;

	return 0;

}*/

/* Zad2
int niz[] = { 1, 4, 5, 6, 8 };

int& vratiRef(int i)
{
	return niz[i];
}

int main()
{
	int i = 0;
	std::cin >> i;
	vratiRef(i) += 1;
	std::cout << "uvecan lvalue je:" << niz[i];
	return 0;

}
*/

/* Zad3
using namespace std;



int main()
{
	int sijeku = 0;
	Tocka t;
	Kruznica k;
	Pravokutnik pp[2];

	for (int i = 2; i--; i > 0)
	{
		cout << "Unesite x koordinatu donje lijeve tocke pravokutnika " << i << " : ";
		cin >> pp[i].doleLijevo.x;
		cout << "Unesite y koordinatu donje lijeve tocke pravokutnika " << i << " : ";
		cin >> pp[i].doleLijevo.y;
		cout << "Unesite x koordinatu gornje desne tocke pravokutnika " << i << " : ";
		cin >> pp[i].goreDesno.x;
		cout << "Unesite x koordinatu gornje desne tocke pravokutnika " << i << " : ";
		cin >> pp[i].goreDesno.y;
	}

	k.ishodiste.x = 0;
	k.ishodiste.y = 0;
	k.radius = 1;


	sijeku = sijekuSe(pp, k);

	cout << "Broj pravokutnika koje kruznica sijece je: " << sijeku;
	return 0;
}
*/


int main()
{
	int n = 5;
	vector test;

	vector test1;
	test.vector_new(5);
	test.vector_push_back(1);
	test.vector_push_back(2);
	test.vector_push_back(3);
	test.vector_push_back(4);
	test.vector_push_back(5);
	test.vector_push_back(6);

	for (int i = 0; i < test.velicina; i++)
	{
		std::cout << test.niz[i] << " ";
	}
	std::cout << " \n";

	std::cout << test.vector_front() << " \n";
	std::cout << test.vector_back() << " \n";
	std::cout << test.vector_size() << " \n";


	test1.vector_new(3);
	test1.vector_push_back(5);
	test1.vector_push_back(4);
	test1.vector_push_back(3);
	test1.vector_push_back(2);
	test1.vector_push_back(1);
	test1.vector_push_back(0);

	for (int i = 0; i < test1.velicina; i++)
	{
		std::cout << test1.niz[i] << " ";
	}
	std::cout << " \n";
	test1.vector_pop_back();

	for (int i = 0; i < test1.velicina; i++)
	{
		std::cout << test1.niz[i] << " ";
	}
	std::cout << " \n";
	std::cout << test1.vector_front() << " \n";
	std::cout << test1.vector_back() << " \n";
	std::cout << test1.vector_size() << " \n";
	test.vector_delete();
	test1.vector_delete();
	for (int i = 0; i < test1.velicina; i++)
	{
		std::cout << test1.niz[i] << " ";
	}
	std::cout << test1.vector_front() << " \n";
	std::cout << test1.vector_back() << " \n";
	std::cout << test1.vector_size() << " \n";
}