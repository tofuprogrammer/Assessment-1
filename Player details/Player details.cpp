#include <iostream>
#include <string>

int main()
{
    std::string name; // Declares a string called 'name', used to store the player's input name.
    std::string username; // Declares a string called 'username', used to store the player's input username.
    std::string clanTag; // Declares a string called 'clan_tag', used to store the player's input clan tag.
    unsigned int exp; // Declares an unsigned int called 'exp', which stores the user's exp total.

    std::cout << "What is your name?\n"; // Asks the user for their name.
    std::cin >> name; // Assigns the variable 'name' with the input given by the user.
    std::cout << "What is your username?\n"; // Asks the user for their username.
    std::cin >> username; // Assigns the variable 'username' with the input given by the user.
    std::cout << "What is your clan tag?\n"; // Asks the user for their clan tag.
    std::cin >> clanTag; // Assigns the variable 'clan_tag' with the input given by the user.
    std::cout << "How many experience points do you have?\n"; // Asks the user for their total experience points.
    std::cin >> exp; // Assigns the variable 'exp' with the input given by the user.

    unsigned int currentLevel = (exp) / 100; /* Calculates the user's current level with integer division.
    Assigns the result to a new unsigned integer called 'current_level'. */
    unsigned int reqExpPoints = 100 - (exp % 100); /* Calculates the required exp points for the user to reach the next level.
    It calculates the remainder of the user's total exp points divided by 100.
    This is then subtracted from the total exp points per level (100).
    The result is then assigned to an unsigned integer called 'req_exp_points'. */

    std::cout << "Your name is " << name << " and your in-game name is [" << clanTag << "]" << username << '\n'; // Outputs the user's name, clan tag, and username.
    std::cout << "You have " << exp << " experience points.\n"; // Outputs the user's total exp points.
    std::cout << '\n'; // Adds a blank new line to separate text.
    std::cout << "Your current level is " << currentLevel << '\n'; // Outputs the user's current level.
    std::cout << "You need " << reqExpPoints << " points to reach the next level (level " << currentLevel + 1 << ").\n"; /* Outputs the exp points required for the user to level up.
    It also outputs what that next level is. */
}