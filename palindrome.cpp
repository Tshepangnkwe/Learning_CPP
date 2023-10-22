#include <iostream>

bool isNumPalindrome(int num) {
    // Handle negative numbers (considering non-negative integers)
    if (num < 0) {
        return false;
    }

    int originalNum = num;
    int reversedNum = 0;

    // Reverse the digits of the number
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    return originalNum == reversedNum;
}

int main() {
    // Example usage
    int number;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    if (isNumPalindrome(number)) {
        std::cout << number << " is a palindrome." << std::endl;
    } else {
        std::cout << number << " is not a palindrome." << std::endl;
    }

    return 0;
}
