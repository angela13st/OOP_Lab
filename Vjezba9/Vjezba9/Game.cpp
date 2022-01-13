#include "Game.h"
#include <iostream>
#include <vector>


int Game::startGame()
{
	int guess = 0;
	int sumofcoins = 0;
	int humans = 0;
	int computers = 0;

	
	std::cout << "Unesite broj ljudi: ";
	std::cin >> humans;
	std::cout << "Unesite broj racunala: ";
	std::cin >> computers;

	std::vector<HumanPlayer> human(humans);
	std::vector<ComputerPlayer> computer(computers);
	bool endgame = false;
	while (!endgame)
	{
		sumofAll = 0;
		for (int i = 0; i < humans; i++)
		{
			human.at(i).setSum();
			sumofAll += human.at(i).getSum();

		}
		for (int i = 0; i < computers; i++)
		{
			computer.at(i).setSum();
			sumofAll += computer.at(i).getSum();

		}
		//std::cout << "Suma: " << sumofAll << "\n";
		for (int i = 0; i < humans; i++)
		{
			std::cout << "Igrac broj " << i + 1 << " pogada: ";
			std::cin >> guess;
			if (guess == sumofAll)
			{
				human.at(i).setPoints();
				if (human.at(i).getPoints() == maxPoints)
				{
					endgame = true;
				}
				
			}

		}
		for (int i = 0; i < computers; i++)
		{
			guess = 0;
			std::cout << "Racunalo broj " << i + 1 << " pogada: ";
			guess = computer.at(i).getGuess(humans + computers);
			std::cout << guess << "\n";
			if (guess == sumofAll)
			{
				computer.at(i).setPoints();
				if (computer.at(i).getPoints() == maxPoints)
				{
					endgame = true;
				}


			}
		}

		std::cout << "Ukupno novcica je: " << sumofAll<<"\n\n\n";
		
	}
	for (int i = 0; i < humans; i++)
	{
		if (human.at(i).getPoints() == maxPoints)
		{
			std::cout << "Igrac broj " << i + 1 << " je pobjedio\n";
		}

	}
	for (int i = 0; i < computers; i++)
	{
		if (computer.at(i).getPoints() == maxPoints)
		{
			std::cout << "Racunalo broj " << i + 1 << " je pobjedilo\n";
		}
	}
	return 0;
}


