#include<iostream>
#include<iomanip>
#include "funkcije.h"


using namespace std;

int main()
{
	int m, n;
	int m2, n2;

	float a = 0.1;
	float b = 2.9;

	cout << "Unesi velicinu za matricu 1\n";
	cin >> m;
	cin >> n;

	cout << "Unesi velicinu za matricu 2\n";
	cin >> m2;
	cin >> n2;

	float* mat1 = new float[m * n];
	float* mat2 = new float[m2 * n2];
	float* mat3 = new float[m * n];
	float* umnozak = new float[m * n2];
	float* transponirana = new float[n * m];
	cout << "Unesi matricu 1\n";
	unos(mat1, m, n);
	cout << "\n";
	ispis(mat1, m, n);
	cout << "\n";
	cout << "Unesi matricu 2\n";

	unos(mat2, m, n);
	cout << "\n";
	cout << "Matrica 2:\n";
	ispis(mat2, m, n);
	cout << "Zbroj:\n";

	zbroji(mat1, mat2, mat3, m, n, m2, n2);
	ispis(mat3, m, n);

	//generiraj(mat3, m, n, a, b);
	//ispis(mat3, m, n);

	cout << "\n";
	cout << "Razlika:\n";
	oduzmi(mat1, mat2, mat3, m, n, m2, n2);
	ispis(mat3, m, n);

	cout << "\n";
	mnozi(mat1, mat2, umnozak, m, n, m2, n2);
	cout << "Umnozak:\n";
	ispis(umnozak, m, n);


	//transponiraj(mat1, transponirana, m, n);
	//ispis(transponirana, n, m);

	return 0;
}

