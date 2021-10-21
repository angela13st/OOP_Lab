#pragma once


#ifndef FUNKCIJE_H
#define FUNKCIJE_H

#include <iostream>
#include "funkcije.h"

void unos(float *mat, int m, int n);
void ispis(float *mat, int m, int n);
void zbroji(float* mat1, float *mat2, float *mat3, int m, int n, int m2, int n2);
void oduzmi(float* mat1, float* mat2, float* mat3, int m, int n, int m2, int n2);
void transponiraj(float* mat1, float* mat2, int m, int n);
void generiraj(float* mat, int m, int n, float a, float b);
void mnozi(float* mat1, float* mat2, float* mat3, int m, int n, int m2, int n2);

#endif