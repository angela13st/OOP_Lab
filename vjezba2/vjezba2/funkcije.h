#pragma once


#ifndef FUNKCIJE_H
#define FUNKCIJE_H

#include <iostream>
#include <cmath>
#include <algorithm> 
#include "funkcije.h"

void unesi(int* niz, int size);
void ispisi(int* niz, int size);
void minmax(int* niz, int size, int& min, int& max);

typedef struct {
	double x;
	double y;
} Tocka;

typedef struct {
	Tocka doleLijevo;
	Tocka goreDesno;
} Pravokutnik;

typedef struct {
	Tocka ishodiste;
	int radius;
} Kruznica;


int sijekuSe(Pravokutnik pp[], Kruznica k);

#endif