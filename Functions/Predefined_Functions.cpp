#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>

int main() { 
    int num;
    double firstNum, secondNum;
    char ch = 't'; // Change 'T' to 't' for correct islower() usage

    std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl; 

    // Use islower() correctly to check if 'ch' is a lowercase letter
    std::cout << "Line 10: Is '" << ch << "' a lowercase letter? " << std::boolalpha << islower(ch) << std::endl; 

    // Use single quotes for characters and static_cast<char> for uppercase conversion
    std::cout << "Line 14: Uppercase 'a' is " << static_cast<char>(toupper('a')) << std::endl; 

    std::cout << "Line 14: 4.5 to the power 6.0 = " << pow(4.5, 6.0) << std::endl; 
    std::cout << "Line 15: Enter two decimal numbers: " << std::endl; 

    std::cin >> firstNum >> secondNum; 
    std::cout << std::endl; 
    
    std::cout << "Line 18: " << firstNum << " to the power of " << secondNum << " = " << pow(firstNum, secondNum) << std::endl; 
    std::cout << "Line 19: 5.0 to the power of 4 = " << pow(5.0, 4) << std::endl;
    
    firstNum = firstNum + pow(3.5, 7.2); 
    std::cout << "Line 21: firstNum = " << firstNum << std::endl; 
    
    num = -32; 
    std::cout << "Line 23: Absolute value of " << num << " = " << abs(num) << std::endl;
    std::cout << "Line 24: Square root of 28.00 = " << sqrt(28.00) << std::endl;
    
    return 0;
}
