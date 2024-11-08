#include <iostream>
#include <string>

#include "Functions (Text casing).hpp"

int main()
{
    std::string userInput;
    do
    {
        std::cout << "Enter some text: ";
        std::getline(std::cin, userInput);
        
        if (!alphabetCheck(userInput)) // If no input characters are in the alphabet
        // alphabet_check returned false
        {
            std::cout << "Input must contain at least one letter!" << '\n'; // Outputs a warning
        }
    }
    while (!alphabetCheck(userInput)); // Performs the do while loop for as long as alphabet_check returns false
    
    std::cout << "Lowercase: " << lowercase(userInput) << '\n';
    std::cout << "Uppercase: " << uppercase(userInput) << '\n';
    std::cout << "Sentence case: " << sentenceCase(userInput) << '\n';
    std::cout << "Alternating case: " << alternatingCase(userInput) << '\n';
}