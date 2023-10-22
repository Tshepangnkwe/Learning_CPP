#include <iostream>

int main () {
    int i;
    std::cout << "Hello, enter any number" << std::endl;
    std::cin >> i; 

    int a = 56;
    int result = i * a;

    std::cout << "The entered number is " << i << std::endl;
    std::cout << i << " multiplied by " << a << " is " << result << std::endl;	
}