

#include <iostream>

// Function to modify values of parameters
void addFirst(int& first, int& second) {
    // Display values of 'first' and 'second'
    std::cout << "Inside addFirst: first = " << first << ", second = " << second << std::endl;
    
    // Modify the value of 'first'
    first = first + 2;
    
    // Display the updated value of 'first' and 'second'
    std::cout << "Inside addFirst: first = " << first << ", second = " << second << std::endl;
    
    // Modify the value of 'second'
    second = second * 2;
    
    // Display the final values of 'first' and 'second'
    std::cout << "Inside addFirst: first = " << first << ", second = " << second << std::endl;
}

// Function to modify values of parameters
void doubleFirst(int one, int two) {
    // Display values of 'one' and 'two'
    std::cout << "Inside doubleFirst: one = " << one << ", two = " << two << std::endl;
    
    // Modify the local variable 'one'
    one = one * 2;
    
    // Display the updated value of 'one' and 'two'
    std::cout << "Inside doubleFirst: one = " << one << ", two = " << two << std::endl;
    
    // Modify the local variable 'two'
    two = two + 2;
    
    // Display the final values of 'one' and 'two'
    std::cout << "Inside doubleFirst: one = " << one << ", two = " << two << std::endl;
}

// Function to modify values of parameters
void squareFirst(int& ref, int val) {
    // Display values of 'ref' and 'val'
    std::cout << "Inside squareFirst: ref = " << ref << ", val = " << val << std::endl;
    
    // Modify the reference 'ref' (which affects the original variable)
    ref = ref * ref;
    
    // Display the updated value of 'ref' and the unchanged value of 'val'
    std::cout << "Inside squareFirst: ref = " << ref << ", val = " << val << std::endl;
    
    // Modify the local variable 'val'
    val = val + 2;
    
    // Display the final values of 'ref' and 'val'
    std::cout << "Inside squareFirst: ref = " << ref << ", val = " << val << std::endl;
}

int main() {
    int num = 5;
    
    // Display the initial value of 'num'
    std::cout << "Inside main: num = " << num << std::endl;
    
    // Call 'addFirst' function to modify 'num'
    addFirst(num, num);
    
    // Display 'num' after calling 'addFirst'
    std::cout << "Inside main after addFirst: num = " << num << std::endl;
    
    // Call 'doubleFirst' function (doesn't affect 'num')
    doubleFirst(num, num);
    
    // Display 'num' after calling 'doubleFirst' (unchanged)
    std::cout << "Inside main after doubleFirst: num = " << num << std::endl;
    
    // Call 'squareFirst' function to modify 'num'
    squareFirst(num, num);
    
    // Display 'num' after calling 'squareFirst' (modified)
    std::cout << "Inside main after squareFirst: num = " << num << std::endl;
    
    return 0;
}
