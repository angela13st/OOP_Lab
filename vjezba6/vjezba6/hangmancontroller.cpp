#include "hangman.h"
#include <cctype>
#include <cstring>
#include <fstream>
#include <time.h>
#include <locale>       

using namespace std;

void HangmanController::setMovie(HangmanModel& model) {

    srand(time(NULL));

    fstream newfile;

    vector<string> movies;

    newfile.open("movie.txt", ios::in);

    if (newfile.is_open()) {

        string str; 

        while (getline(newfile, str)) 
        {
            
            movies.push_back(str);
        }

        newfile.close();
    }

    for (int i = 0; i < movies.size(); i++) {
        for (auto& c : movies[i])
        {
            c = tolower(c);
        }
        
    }

    model.setmovie(movies[rand() % movies.size()]);

    string mymovie = model.getmovie();
    string guessmymovie = model.getguessmovie();
    for (int i = 0; i < mymovie.size(); i++) {
        if (isspace(mymovie[i])) {
            guessmymovie.push_back(' ');
        }
        else {
            guessmymovie.push_back('*');
        }
    }
    model.setguessmymovie(guessmymovie);
}

void HangmanController::updateLives(HangmanModel& model, bool mistake) {
    if (mistake) 
        model.setlives();
}

void HangmanController::updateMovies(HangmanModel& model) {

    vector<char> guessedLetters = model.getguessedLetters();
    char letter = guessedLetters.back();
    bool mistake = true;
    string mymovie = model.getmovie();
    for (int i = 0; i < mymovie.size(); i++) {
        if (mymovie[i] == letter) {
            model.setguessmovie(i, letter);
            mistake = false;
        }
    }

    updateLives(model, mistake);
}

bool HangmanController::isLetterUsed(HangmanModel& model, char s) {
    vector<char> myguessedLetters = model.getguessedLetters();
    for (int i = 0; i < myguessedLetters.size(); i++) {
        if (myguessedLetters[i] == s) {
            return true;
        }
    }

    return false;
}

void HangmanController::enterLetter(HangmanModel& model) {

    char s;

    cout << "Enter one non-used letter: " << endl;
    cin >> s;
    s = tolower(s);
    while ((!isalpha(s)) || (isLetterUsed(model, s)))
    {
        cout << "you already used that letter\n ";
        cout << "Enter one non-used letter: " << endl;
        cin >> s;
    }

    model.setguessedLetters(s);
}

void HangmanController::updateDrawing(HangmanModel& model) {

    int lives = model.livesleft();

    string right_leg = (lives - 1) >= 0 ? " " : "\\";
    string left_leg = (lives - 2) >= 0 ? " " : "/";
    string torso_down = (lives - 3) >= 0 ? " " : "|";
    string right_hand = (lives - 4) >= 0 ? " " : "\\";
    string left_hand = (lives - 5) >= 0 ? " " : "/";
    string torso_up = (lives - 6) >= 0 ? " " : "|";
    string head = (lives - 7) >= 0 ? " " : "0";

    string s1 = "    ________       \n"
        "    | /  |         \n"
        "    |/   " + head + "\n"
        "    |   " + left_hand + torso_up + right_hand + "\n"
        "    |    " + torso_down + "\n"
        "    |   " + left_leg + " " + right_leg + "\n"
        "    |              \n"
        "    |              \n"
        " ___|___           \n";

    model.setcurrent_hangman(s1);
}

bool HangmanController::isGameOver(HangmanModel& model) {
    int lives = model.livesleft();
    if (!lives) {
        cout << "\n";
        cout << "**********\n";
        cout << "*YOU LOST*\n";
        cout << "**********\n";
        return false;
    }
    string mymovie = model.getmovie();
    string guessmymovie = model.getguessmovie();
    for (int i = 0; i < mymovie.size(); i++) {
        if (mymovie[i] != guessmymovie[i]) {
            return true;
        }
    }
    cout << "\n";
    cout << "*********\n";
    cout << "*YOU WON*\n";
    cout << "*********\n";
    return false;
}