#pragma once

inline bool alphabetCheck (const std::string& input)
{
    for (char c : input)
    {
        if (std::isalpha(c)) // Checks if the character is in the alphabet.
        {
            return true; // Returns true if the character is in the alphabet.
        }
    }
    return false; // Returns false if no input characters are in the alphabet.
}

inline std::string lowercase(const std::string& userInput)
{
    std::string lowercaseInput = userInput; // Initializes the final output to the user's input.
    for (char &c : lowercaseInput) // Checks every character in the user's input.
    {
        c = std::tolower(c); // Converts the character to lowercase.
    }
    return lowercaseInput;
}

inline std::string uppercase(const std::string& userInput)
{
    std::string uppercaseInput = userInput; // Initializes the final output to the user's input.
    for (char &c : uppercaseInput) // Checks every character in the user's input.
    {
        c = std::toupper(c); // Converts the character to uppercase.
    }
    return uppercaseInput;
}

inline std::string sentenceCase(const std::string& userInput)
{
    std::string sentenceCaseInput = userInput; // Initializes the final output to the user's input.
    bool startOfSentence = true; // This bool is changed depending on if the character being modified is at the start of the sentence or not.
    for (char &c : sentenceCaseInput)
    {
        if (startOfSentence && std::isalpha(c)) // Checks if startOfSentence is true and that the character is in the alphabet.
        {
            c = std::toupper(c); // Makes the character uppercase.
            startOfSentence = false; // Sets the startOfSentence bool to false.
        }
        else // If startOfSentence = false || !(std::isalpha(c)).
        {
            c = std::tolower(c); // Makes the character lowercase.
        }

        if (c == '.' || c == '!' || c == '?') // If the current character ends a sentence.
        {
            startOfSentence = true;
        }
    }
    return sentenceCaseInput;
}

inline std::string alternatingCase(const std::string& userInput)
{
    std::string alternatingCaseInput = userInput; // Initializes the final output to the user's input.
    bool uppercase = true;
    for (char &c : alternatingCaseInput)
    {
        if (std::isalpha(c))
        {
            c = uppercase ? std::toupper(c) : std::tolower(c); // If uppercase is true, the character is made to be uppercase.
            // If it's false, the character is set to lowercase.
            uppercase = !uppercase; // Inverts the value of uppercase.
        }
    }
    return alternatingCaseInput;
}