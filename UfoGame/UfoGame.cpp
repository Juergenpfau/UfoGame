#include <iostream>
#include "ufo_functions.h"
#include <vector>

int main() {

    greet();

    std::string codeword = "juergen";
    std::string answer = "_______";
    int misses = 0;
    std::vector<char> incorrect;
    bool guess = false;
    char letter;

    while (answer != codeword && misses < 7) {

        display_misses(misses);
        display_status(incorrect, answer);

        std::cout << "\n\nPlease enter your guess: ";
        std::cin >> letter;

        for (int i = 0; i < codeword.length(); i++) {

            if (letter == codeword[i]) {

                answer[i] = letter;
                guess = true;

            }

        }

        if (guess) {

            std::cout << "\nCorrect!\n";

        }
        else {

            std::cout << "\nIncorrect! \n";
            incorrect.push_back(letter);
            misses++;

        }

        guess = false;

    }

    end_game(answer, codeword);

}