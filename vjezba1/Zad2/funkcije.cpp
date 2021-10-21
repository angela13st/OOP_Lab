#include <iostream>
#include <iomanip>


#include "funkcije.h"

using namespace std;

void unos(float *mat, int m, int n)
{
	float tmp = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> tmp;
			*(mat + i * n + j) = tmp;
		}

	}
}

void ispis(float* mat, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << setprecision(4) << fixed << *(mat + i * n + j) << " ";
		}
		cout << "\n";
	}
}

void zbroji(float* mat1, float* mat2, float *mat3, int m, int n, int m2, int n2)
{
	if (m != m2 || n != n2)
		cout << "matrice se ne mogu zbrajati!";
	else
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				*(mat3 + i * n + j) = *(mat1 + i * n + j) + *(mat2 + i * n + j);
			}

		}
	}
}

void oduzmi(float* mat1, float* mat2, float* mat3, int m, int n, int m2, int n2)
{
	if (m != m2 || n != n2)
		cout << "matrice se ne mogu oduzimati!";
	else
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				*(mat3 + i * n + j) = *(mat1 + i * n + j) - *(mat2 + i * n + j);
			}

		}
	}
}
void transponiraj(float* mat1, float* mat2, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			*(mat2 + j * n + i) = *(mat1 + i * n + j);
		}

	}

}

void generiraj(float* mat, int m, int n, float a, float b)
{
	float rando = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			rando = a + ((float)rand()) / (float)(RAND_MAX / (b - a));
			*(mat + i * n + j) = rando;
		}

	}
}

void mnozi(float* mat1, float* mat2, float* mat3, int m, int n, int m2, int n2)
{
	if (n != m2)
		cout << "matrice se nemogu mnoziti \n";
	else
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				*(mat3 + i * n + j) = 0;
				for (int k = 0; k < n2; k++)
				{
					*(mat3 + i * n + j) += (*(mat1 + i * n + k)) * (*(mat2 + k * n2 + j));
				}
			}

		}
	}


}