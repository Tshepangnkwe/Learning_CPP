#include <iostream>

int main() {

    double i = 3.142;
    double j;

    std::cout << "Hello, enter any decimal number: ";
    std::cin >> j;

    double results = j / i;
    std::cout << j << " divided by " << i << " is " << results << std::endl; 

}