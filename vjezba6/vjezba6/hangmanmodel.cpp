#include "hangman.h"

using namespace std;

int HangmanModel::livesleft()
{
	return lives;
}
void HangmanModel::setlives()
{
	lives--;
}
void HangmanModel::setmovie(string str)
{
	movie = str;
}
void HangmanModel::setguessmovie(int i, char letter)
{
	guessmovie[i] = letter;
}
void HangmanModel::setguessmymovie(string guessmymovie)
{
	guessmovie=guessmymovie;
}
void HangmanModel::setcurrent_hangman(string s1)
{
	current_hangman = s1;
}
void HangmanModel::setguessedLetters(char c)
{
	guessedLetters.push_back(c);
}
string HangmanModel::getmovie()
{
	return movie;
}
string HangmanModel::getguessmovie()
{
	return guessmovie;
}
string HangmanModel::getcurrent_hangman()
{
	return current_hangman;
}
vector<char> HangmanModel::getguessedLetters()
{
	return guessedLetters;
}