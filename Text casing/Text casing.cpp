#include <iostream>
#include <string>

#include "Functions (Text casing).hpp"

int main()
{
    std::string user_input;
    do
    {
        std::cout << "Enter some text: ";
        std::getline(std::cin, user_input);
        
        if (!alphabet_check(user_input)) // If no input characters are in the alphabet
        // alphabet_check returned false
        {
            std::cout << "Input must contain at least one letter!" << '\n'; // Outputs a warning
        }
    }
    while (!alphabet_check(user_input)); // Performs the do while loop for as long as alphabet_check returns false
    
    std::cout << "Lowercase: " << lowercase(user_input) << '\n';
    std::cout << "Uppercase: " << uppercase(user_input) << '\n';
    std::cout << "Sentence case: " << sentence_case(user_input) << '\n';
    std::cout << "Alternating case: " << alternating_case(user_input) << '\n';
}