#include "ComputerPlayer.h"


void ComputerPlayer::setSum()
{
	sum = 0;
	int coin = 0;
	//srand((unsigned)time(NULL));

	int uzeti[6] = { 0 };

	int n= 0 + (rand() % 3);
	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			coin = 0 + (rand() % 5);
			if (coin == 1 || coin == 2 || coin == 5)
			{
				if (uzeti[coin] > 0)
				{
					i--;
				}
				else
				{
					uzeti[coin]++;
					sum += coin;

				}
			}
			else
				i--;
		}
	}
}

int ComputerPlayer::getGuess(int n)
{
	//srand((unsigned)time(NULL));

	int guess = 0 + (rand() % (n*8));

	return guess;
}
