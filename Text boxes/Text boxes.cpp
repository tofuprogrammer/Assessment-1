#include <iostream>
#include <string>

void printBoxAroundText(const std::string& text) {
    // Calculate the width of the tabulated text line (including spaces and pipes)
    int width = 4 * text.size() + 1; // 3 chars for each: 2 spaces + 1 pipe; 1 more for end pipe

    // Top border: alternating -= with + overwriting where | appears
    for (int i = 0; i < width; i++) {
        if (i % 4 == 0) {
            std::cout << "+";
        } else if (i % 2 == 0) {
            std::cout << "=";
        } else {
            std::cout << "-";
        }
    }
    std::cout << std::endl;

    // Middle (tabulated characters)
    std::cout << "|"; // Start with pipe
    for (char c : text) {
        std::cout << " " << c << " |";
    }
    std::cout << std::endl;

    // Bottom border: same as top
    for (int i = 0; i < width; i++) {
        if (i % 4 == 0) {
            std::cout << "+";
        } else if (i % 2 == 0) {
            std::cout << "=";
        } else {
            std::cout << "-";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::string input;

    while (true) {
        // Prompt the user for input
        std::cout << "Enter a sentence: ";
        std::getline(std::cin, input);

        // Check if input is empty
        if (input.empty()) {
            std::cerr << "Error: Input cannot be an empty string. Please try again." << std::endl;
            continue; // Reprompt the user
        }

        // Print the ASCII art box around the text
        printBoxAroundText(input);
    }
}
