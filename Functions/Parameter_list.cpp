#include <iostream>

// Function definition
int add(int a, int b) {
    return a + b;
}

int diff(int a, int b) {
    return a - b;
}

// Function with an empty formal parameter list
double calculateSquare() {
    double number = 5.0; 
    return number * number;
}

// Value-returning function that calculates the square of a number
double square(double num) {
    return num * num;
}

int main() { 

    int x, y;

    // Input from the user
    std::cout << "Enter a number: ";
    std::cin >> x;

    std::cout << "Enter another number: ";
    std::cin >> y;

    // Function call with user-input values
    int sum = add(x, y);
    std::cout << "Sum: " << sum << std::endl;

    // Function call with non-empty actual parameter list
    int difference = diff(5, 10);
    std::cout << "Difference: " << difference << std::endl; 

    // Call the function with no arguments to calculate the square
    double result = calculateSquare();
    std::cout << "The square is: " << result << std::endl; 

    double i = 4.0;
    double j = 2.0;

    // Calling the square function in an assignment statement
    double result1 = square(i); // result1 will be 16.0
    double result2 = square(j); // result2 will be 4.0

    // Calling the square function in an output statement
    std::cout << "The square of " << i << " is " << square(i) << std::endl; // Output: The square of 4 is 16
    std::cout << "The square of " << j << " is " << square(j) << std::endl; // Output: The square of 2 is 4

    // Calling the square function as a parameter in a function call
    double sum_of_squares = square(i) + square(j); // sum_of_squares will be 16.0 + 4.0 = 20.0
    std::cout << "Sum of squares: " << sum_of_squares << std::endl; // Output: Sum of squares: 20


    return 0;
}
