#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // List of words for the game
    vector<string> words;
    words.push_back("apple");
    words.push_back("banana");
    words.push_back("orange");
    words.push_back("grape");
    words.push_back("strawberry");
    words.push_back("cherry");
    words.push_back("melon");

    // Generate a random index to choose a word from the list
    int randomIndex = rand() % words.size();
    string secretWord = words[randomIndex];
    int wordLength = secretWord.length();

    string guessedWord(wordLength, '_');
    int attempts = 0;
    bool isGameOver = false;

    cout << "Welcome to the Word Guessing Game!\n";
    cout << "I have selected a word, and you need to guess it letter by letter.\n";
    cout << "The word contains " << wordLength << " letters.\n";

    while (!isGameOver) {
        cout << "Current guessed word: " << guessedWord << endl;
        cout << "Enter your guess (a single letter): ";
        char guess;
        cin >> guess;

        attempts++;

        bool foundLetter = false;
        for (int i = 0; i < wordLength; i++) {
            if (secretWord[i] == guess) {
                guessedWord[i] = guess;
                foundLetter = true;
            }
        }

        if (foundLetter) {
            cout << "Good guess! You found a letter.\n";
        } else {
            cout << "Oops! The letter is not in the word. Try again.\n";
        }

        if (guessedWord == secretWord) {
            cout << "Congratulations! You guessed the word \"" << secretWord << "\" in " << attempts << " attempts.\n";
            isGameOver = true;
        }
    }

    return 0;
}

