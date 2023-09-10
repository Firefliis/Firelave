#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Guessing Game!" << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << std::endl;
            break;
        } else if (guess < secretNumber) {
            std::cout << "Try higher." << std::endl;
        } else {
            std::cout << "Try lower." << std::endl;
        }
    }

    return 0;
}
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator
    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    return 0;
}
