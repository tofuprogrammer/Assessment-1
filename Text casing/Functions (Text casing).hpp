#pragma once

inline bool alphabet_check (const std::string& input)
{
    for (char c : input)
    {
        if (std::isalpha(c))
        {
            return true;
        }
    }
    return false; // Returns false if no input characters are in the alphabet
}

inline std::string lowercase(const std::string& user_input)
{
    std::string lowercase_input = user_input; // Initializes the final output to the user's input
    for (char &c : lowercase_input) // Checks every character in the user's input
    {
        c = std::tolower(c); // Converts the character to lowercase
    }
    return lowercase_input;
}

inline std::string uppercase(const std::string& user_input)
{
    std::string uppercase_input = user_input; // Initializes the final output to the user's input
    for (char &c : uppercase_input) // Checks every character in the user's input
    {
        c = std::toupper(c); // Converts the character to uppercase
    }
    return uppercase_input;
}

inline std::string sentence_case(const std::string& user_input)
{
    std::string sentence_case_input = user_input; // Initializes the final output to the user's input
    bool start_of_sentence = true; // This bool is changed depending on if the character being modified is at the start of the sentence or not
    for (char &c : sentence_case_input)
    {
        if (start_of_sentence && std::isalpha(c)) // Checks if start_of_sentence is true  and that the character is in the alphabet
        {
            c = std::toupper(c); // Makes the character uppercase
            start_of_sentence = false; // Sets the start_of_sentence bool to false
        }
        else // If start_of_sentence = false || !(std::isalpha(c))
        {
            c = std::tolower(c); // Makes the character lowercase
        }

        if (c == '.' || c == '!' || c == '?') // If the current character ends a sentence 
        {
            start_of_sentence = true;
        }
    }
    return sentence_case_input;
}

inline std::string alternating_case(const std::string& user_input)
{
    std::string alternating_case_input = user_input; // Initializes the final output to the user's input
    bool uppercase = true;
    for (char &c : alternating_case_input)
    {
        if (std::isalpha(c))
        {
            c = uppercase ? std::toupper(c) : std::tolower(c); // If uppercase is true, the character is made to be uppercase
            // If it's false, the character is set to lowercase
            uppercase = !uppercase; // Inverts the value of uppercase
        }
    }
    return alternating_case_input;
}