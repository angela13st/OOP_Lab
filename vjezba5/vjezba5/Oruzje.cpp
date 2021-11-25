#include "Oruzje.h"

void Oruzje::setPolozaj(double x, double y, double z)
{
	polozaj.set(x, y, z);
}
void Oruzje::getPolozaj(double* x, double* y, double* z)
{
	double tx, ty, tz;
	polozaj.get(&tx, &ty, &tz);
	*x = tx;
	*y = ty;
	*z = tz;
}
double Oruzje::getVisina()
{
	double x = polozaj.gety();
	return x;
}
void Oruzje::set(int kapacitet)
{
	magazine = kapacitet;
	bullet = kapacitet;
}
void Oruzje::get(int* kapacitet, int* metci)
{
	*kapacitet = magazine;
	*metci = bullet;
}
void Oruzje::shoot()
{
	bullet--;
}
void Oruzje::reload()
{
	bullet = magazine;
}

int Oruzje::getstatus()
{
	return this->bullet;
}