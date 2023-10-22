#include <iostream>

void funcValueParam(int num) {
    std::cout << "In the function funcValueParam, before changing, num = " << num << std::endl;
    num = 15;
    std::cout << "In the function funcValueParam, after changing, num = " << num << std::endl;
}

int main() {
    int number = 6;
    std::cout << "Before calling the function funcValueParam, number = " << number << std::endl;
    funcValueParam(number);
    std::cout << "After calling the function funcValueParam, number = " << number << std::endl;
    return 0;
}