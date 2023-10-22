#include <iostream>
#include <string>

int main() {
    // Ask the user to input a word
    std::cout << "Enter a word (at least 5 characters): ";
    std::string word;
    std::cin >> word;

    // Validate that the word has at least 5 characters
    while (word.length() < 5) {
        std::cout << "Please enter a word with at least 5 characters: ";
        std::cin >> word;
    }

    // Ask the user to input a character
    std::cout << "Enter a character: ";
    char character;
    std::cin >> character;

    // Calculate the number of times the input character appears in the word
    int count = 0;
    for (char c : word) {
        if (c == character) {
            count++;
        }
    }

    // Output the result
    std::cout << "The character '" << character << "' appears in the word '" << word << "' "
              << count << " times." << std::endl;

    return 0;
}
