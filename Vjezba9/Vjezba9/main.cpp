#include "Game.h"

#include "Zivotinja.h"
#include "Brojac.h"
#include "Pauk.h"
#include "Ptica.h"
#include "Kukac.h"
#include "Golub.h"
#include "Bubamara.h"
#include "Vucjipauk.h"




int main()
{
	Game igra;
	igra.startGame();

	return 0;
}


int main()
{
	VucjiPauk vpauk;
	Golub golub;
	Bubamara bubamara;
	Brojac broji;

	broji.getZivotinja(vpauk);
	broji.getZivotinja(golub);
	broji.getZivotinja(bubamara);

	broji.printUkupnoNogu();


	return 0;
}
