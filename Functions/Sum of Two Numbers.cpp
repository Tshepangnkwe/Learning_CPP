#include <iostream>

int addition(int a, int b) {
	std::cout << "Enter a number.";
	std::cin >> a;
	std::cout << "Enter a number.";
	int sum = a + b;
}

int main() {
    addition(10, 15);
    return 0;
}