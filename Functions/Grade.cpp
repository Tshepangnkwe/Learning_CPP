#include <iostream>

// Function to get the course score from the user
void getScore(int& score) {
    // Prompt the user for the course score
    std::cout << "Enter course score: ";

    // Read the course score from the user
    std::cin >> score;

    // Display the entered course score
    std::cout << std::endl << "Course score is " << score << std::endl;
}

// Function to print the course grade based on the score
void printGrade(int cScore) {
    // Display a message indicating the purpose of this function
    std::cout << "Your grade for the course is ";

    // Determine and print the course grade based on the score
    if (cScore >= 90)
        std::cout << "A." << std::endl;
    else if (cScore >= 80)
        std::cout << "B." << std::endl;
    else if (cScore >= 70)
        std::cout << "C." << std::endl;
    else if (cScore >= 60)
        std::cout << "D." << std::endl;
    else
        std::cout << "F." << std::endl;
}

int main() {
    int courseScore;

    // Display program description
    std::cout << "Based on the course score, \n"
              << "this program computes the "
              << "course grade." << std::endl;

    // Get the course score from the user
    getScore(courseScore);

    // Print the grade based on the course score
    printGrade(courseScore);

    return 0;
}
