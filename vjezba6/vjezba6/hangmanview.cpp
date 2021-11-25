#include "hangman.h"

using namespace std;

void HangmanView::showProgress(HangmanModel model) {
    cout << "Current progress: " << model.getguessmovie() << endl;
}

void HangmanView::getDrawing(HangmanModel model) {
    cout << model.getcurrent_hangman() << endl;
}

void HangmanView::showGuessedLetters(HangmanModel model) {
    vector<char> myguessedLetters = model.getguessedLetters();
    cout << "Used letters: ";
    for (int i = 0; i < myguessedLetters.size(); i++) {
        cout << myguessedLetters[i] << " ";
    }
    cout << endl;
}

void HangmanView::showCorrect(HangmanModel model) {
    cout << "Correct movie name: " << model.getmovie() << endl;
}

