#include <iostream>
#include <string>
#include <vector>

int main()
{
    int inventorySize;
        std::cout << "Enter the size of your inventory (1-16): ";
        std::cin >> inventorySize;
    while (std::cin.fail() || inventorySize < 1 || inventorySize > 16) // Flushes the cin buffer and prompts the user for another number if their input was invalid
    // The user's input is invalid if it is not a number, a number less than 1, or a number greater than 16
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Error: Invalid input. Enter a number between 1 and 16: ";
        std::cin >> inventorySize;
    }
    std::cout << inventorySize;
    std::vector<std::string> arr(inventorySize);
    std::cout << "Initialised inventory with " << inventorySize << " slots." << '\n';
    std::cout << "Type \"help\" for a list of all commands" << '\n';
}
