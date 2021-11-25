#include "hangman.h"

using namespace std;

int main() {
    HangmanModel model;
    HangmanView view;
    HangmanController control;
    int select=0;
    cout << "GET READY!! \n";
    cout << "LET'S PLAY \n";

    control.setMovie(model);
    while (control.isGameOver(model))
    {
        control.updateDrawing(model);
        view.getDrawing(model);
        view.showProgress(model);
        view.showGuessedLetters(model);
        control.enterLetter(model);
        control.updateMovies(model);
    }

    control.updateDrawing(model);
    view.getDrawing(model);
    view.showCorrect(model);
    view.showGuessedLetters(model);
    view.showProgress(model);
}