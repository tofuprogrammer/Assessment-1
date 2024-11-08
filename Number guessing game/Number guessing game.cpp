#include <random>
#include <iostream>

#include "Functions (Number guessing game).hpp"

int main()
{
    const int randomNumber = random(1,100);
    std::cout << "The random number is: " << randomNumber << '\n';
    int userGuess = 0; // Initialize to 0 (outside range of random numbers) to avoid errors.
    while (userGuess != randomNumber) // Always true on the first pass. Loop ends if the user guesses the correct number.
    {
        std::cout << "Enter a number between 1 and 100: ";
        std::cin >> userGuess;

        // Checks if the user's guess isn't an integer, or is an integer but is outside the possible range of random numbers.
        if (std::cin.fail() || userGuess > 100 || userGuess < 1)
        {
            std::cerr << "Invalid input. You must enter a number between 1 and 100." << '\n'; // Outputs an error message.
            std::cin.clear(); // Clears the error.
            std::cin.ignore(1000, '\n'); // Flushes the input buffer.
            continue; // Skips the rest of the loop.
        }
        // Calculates the difference between the user's guess and the random number.
        int difference = abs(userGuess - randomNumber);

        // Compares the user's guess to the random number.
        if (userGuess == randomNumber)
        {
            std::cout << "You guessed the number correctly!";
        }
        if (difference >= 50)
        {
            std::cout << "Freezing!" << '\n';
        }
        if (35 <= difference && difference < 50)
        {
            std::cout << "Colder!" << '\n';
        }
        if (25 <= difference && difference < 35)
        {
            std::cout << "Cold!" << '\n';
        }
        if (15 <= difference && difference < 25)
        {
            std::cout << "Warm!" << '\n';
        }
        if (10 <= difference && difference < 15)
        {
            std::cout << "Warmer!" << '\n';
        }
        if (5 <= difference && difference < 10)
        {
            std::cout << "Hot!" << '\n';
        }
        if (3 <= difference && difference < 5)
        {
            std::cout << "Hotter!" << '\n';
        }
        if (1 <= difference && difference < 3)
        {
            std::cout << "Boiling!" << '\n';
        }
    }
}