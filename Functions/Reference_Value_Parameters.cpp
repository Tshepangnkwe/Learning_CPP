//Reference and value parameters
#include <iostream>

// Function to modify values of parameters
void funOne(int a, int& b, char v) {
    int one;
    // Copy the value of 'a' to 'one'
    one = a;
    // Increment the local variable 'a'          
    a++; 
    // Modify the reference 'b'             
    b = b * 2; 
    // Modify the local variable 'v'        
    v = 'B';           
    std::cout << "Inside funOne: a = " << a << ", b = " << b << ", v = " << v << ", and one = " << one << std::endl;
}

// Function to modify values of parameters
void funTwo(int& x, int y, char& w) {
    // Modify the reference 'x'
    x++; 
    // Modify the local variable 'y'              
    y = y * 2; 
    // Modify the reference 'w'         
    w = 'G';            
    std::cout << "Inside funTwo: x = " << x << ", y = " << y << ", and w = " << w << std::endl;
}

int main() {
    int num1, num2;
    char ch;
    // Initialize 'num1'
    num1 = 10; 
    // Initialize 'num2'         
    num2 = 15; 
    // Initialize 'ch'         
    ch = 'A';           

    // Display the initial values
    std::cout << "Inside main: num1 = " << num1 << ", num2 = " << num2 << ", and ch = " << ch << std::endl;

    // Call funOne to modify 'num2' and 'ch'
    funOne(num1, num2, ch);

    // Display the values after calling funOne
    std::cout << "After funOne: num1 = " << num1 << ", num2 = " << num2 << ", and ch = " << ch << std::endl;

    // Call funTwo to modify 'num2' and 'ch'
    funTwo(num2, 25, ch);

    // Display the values after calling funTwo
    std::cout << "After funTwo: num1 = " << num1 << ", num2 = " << num2 << ", and ch = " << ch << std::endl;

    return 0;
}
