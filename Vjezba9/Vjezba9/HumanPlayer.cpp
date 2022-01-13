#include "HumanPlayer.h"
#include <iostream>

void HumanPlayer::setSum()
{
	sum = 0;
	int n = 0;
	std::cout << "Unestie koliko novcica uzimate " ;
	std::cin >> n;
	while (n > 3)
	{
		std::cout << "Nemozete uzeti toliko novcica\n";
		std::cout << "Unesite koliko novcica uzimate ";
		std::cin >> n;

	}
	int coin = 0;
	int uzeti[6] = { 0 };
	for (int i = 1; i <= n; i++)
	{
		std::cout << "Unesite vrijednost novcica " << i << " ";
		std::cin >> coin;
		
		if (coin == 1 || coin == 2 || coin == 5)
		{
			if (uzeti[coin] > 0)
			{
				std::cout << "Taj novcic ste vec uzeli\n";
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
