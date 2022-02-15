#include "ufo_functions.h"
#include <iostream>
#include <vector>

// Define functions
void greet() {

    std::cout << "=============\n";
    std::cout << "UFO: The Game\n";
    std::cout << "=============\n";
    std::cout << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n";

}

void display_status(std::vector<char> incorrect, std::string answer) {

    std::cout << "\nIncorrect Guesses:\n";

    for (int i = 0; i < incorrect.size(); i++) {
        std::cout << incorrect[i] << ' ';
    }

    std::cout << "\nCodeword:\n";

    for (int i = 0; i < answer.length(); i++) {
        std::cout << answer[i] << ' ';
    }

}

void end_game(std::string answer, std::string codeword) {

    if (answer == codeword) {

        std::cout << "Hooray! You saved the person and earned a medal of honor!\n";

    }
    else {

        std::cout << "Oh no! The UFO just flew away with another person!\n";

    }

}

void display_misses(int misses) {
    std::cout << "you have missed " << misses << " times";

}





