#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    double number;
    std::cout << "Enter a number: ";
    std::cin >> number; // Assigns the user's input to the double declared on line 7 (number).

    if (std::cin.fail()) // Clears user's input and prompts user for input again if invalid (not a number).
    {
        std::cerr << "Invalid input. You must enter a number. The program will now exit...";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 1;
    }

    // Creates variables that store the result of each operation on the number input by the user.
    double negation = number * (-1);
    double absolute_value = abs(number);
    double square = pow(number, 2);
    double cube = pow(number, 3);
    double root = sqrt(absolute_value);
    double floor = std::floor(number);
    double ceiling = std::ceil(number);
    double rounded = std::round(number);

    std::cout << "The number you specified is " << number << '\n'; // Outputs the number input by the user.
    if (number < 0) // Checks if the number the user input is negative.
    {
        std::cout << "This is a negative number, so the absolute value of " << number << " (" << absolute_value << ") will be used to calculate the square root." << '\n';
    }

    // Outputs results.
    std::cout << "The negation value of " << number << " is " << negation << '\n';
    std::cout << "The absolute value of " << number << " is " << absolute_value << '\n';
    std::cout << "The square of " << number << " is " << square << '\n';
    std::cout << "The cube of " << number << " is " << cube << '\n';
    std::cout << "The root of " << number << " is " << root << '\n';
    std::cout << "The floor of " << number << " is " << floor << '\n';
    std::cout << "The ceiling of " << number << " is " << ceiling << '\n';
    std::cout << "The rounded form of " << number << " is " << rounded << '\n';
}