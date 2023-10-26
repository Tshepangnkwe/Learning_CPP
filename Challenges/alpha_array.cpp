#include <iostream>
#include <iomanip>

int main() {
    const int size = 50;
    double alpha[size];

    // Initialize the array
    for (int i = 0; i < size; ++i) {
        if (i < size / 2) {
            // First 25 components are the square of the index
            alpha[i] = static_cast<double>(i * i);
        } else {
            // Last 25 components are three times the index
            alpha[i] = 3.0 * static_cast<double>(i);
        }
    }

    // Output the array with 10 elements per line
    for (int i = 0; i < size; ++i) {
        std::cout << std::setw(8) << alpha[i] << " ";
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }

    return 0;
}
