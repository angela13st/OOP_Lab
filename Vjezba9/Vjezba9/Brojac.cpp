#include "Brojac.h"

void Brojac::getZivotinja(Zivotinja& zivotinja)
{
	std:: cout << "Dodan : " << zivotinja.vrsta() << "\n";
	ukupnoNogu += zivotinja.brNogu();
}

void Brojac::printUkupnoNogu()
{
	std::cout << "Ukupan broj nogu je : " << ukupnoNogu;
}
