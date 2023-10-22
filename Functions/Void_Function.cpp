#include <iostream>

void printStars(int blanks, int starsInLine) {
    int count;
    for (count = 1; count <= blanks; count++)
        std::cout << ' '; 

    for (count = 1; count <= starsInLine; count++) 
        std::cout << "* "; 

    std::cout << std::endl;
}

int main() {
    int noOfLines; // variable to store the number of lines
    int counter;   // for loop control variable
    int noOfBlanks; // variable to store the number of blanks

    std::cout << "Enter the number of star lines (1 to 20) "
         << "to be printed: "; 
    std::cin >> noOfLines;

    while (noOfLines < 1 || noOfLines > 20) {
        std::cout << "Number of star lines should be "
             << "between 1 and 20" << std::endl; 
        std::cout << "Enter the number of star lines "
             << "(1 to 20) to be printed: "; 
        std::cin >> noOfLines; 
    }

    std::cout << std::endl << std::endl; 
    noOfBlanks = 30;

    for (counter = 1; counter <= noOfLines; counter++) {
        printStars(noOfBlanks, counter); 
        noOfBlanks--; 
    }

    return 0;
}
