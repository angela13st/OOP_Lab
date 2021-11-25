#include <iostream>
#include <string>
#include <vector>

using namespace std;

class HangmanModel 
{
private:
    int lives = 7;
    string movie; 
    string guessmovie;
    string current_hangman;
    vector<char> guessedLetters;
public:
    int livesleft();
    void setlives();
    void setmovie(string);
    void setguessmymovie(string);
    void setguessmovie(int, char);
    void setcurrent_hangman(string);
    void setguessedLetters(char);
    string getmovie();
    string getguessmovie();
    string getcurrent_hangman();
    vector<char> getguessedLetters();
   
};

class HangmanView 
{
public:
    void getDrawing(HangmanModel model);
    void showProgress(HangmanModel model);
    void showGuessedLetters(HangmanModel model);
    void showCorrect(HangmanModel model);
};

class HangmanController 
{
public:
    void setMovie(HangmanModel& model);
    void updateLives(HangmanModel& model, bool mistake);
    void enterLetter(HangmanModel& model);
    bool isLetterUsed(HangmanModel& model, char s);
    void updateMovies(HangmanModel& model);
    void updateDrawing(HangmanModel& model);
    bool isGameOver(HangmanModel& model);
};