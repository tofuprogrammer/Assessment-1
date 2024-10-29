#include "Include (Number guessing game).hpp"

int main()
{
    const int random_number = random(1,100);
    std::cout << "The random number is: " << random_number << '\n';
    int user_guess = 0;
    while (user_guess != random_number)
    {
        std::cout << "Enter a number between 1 and 100: ";
        std::cin >> user_guess;
        if (std::cin.fail() || user_guess > 100 || user_guess < 1)
        {
            std::cerr << "Invalid input. You must enter a number between 1 and 100." << '\n';
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        int difference = abs(user_guess - random_number);

        if (user_guess == random_number)
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