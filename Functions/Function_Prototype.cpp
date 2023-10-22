#include <iostream>

// Function prototype
double larger(double x, double y);

// Function definition
double larger(double x, double y) {
  double max;
  if (x >= y) 
    max = x;
  else 
    max = y;
  return max;
}

// Function call
int main() { 

  double largerNumber = larger(1.0, 2.0);
  std::cout << largerNumber << std::endl;

  return 0;
}
