/*
Write a program that checks if the angles given can make a triangle or not (their sum must be 180 degrees).
*/

#include <iostream>

int main() {

    int angle1;
    int angle2;
    int angle3;

    std::cout << "Enter value of angle 1: " <<std::endl;
    std::cin >> angle1;

    std::cout << "Enter value of angle 2: " <<std::endl;
    std::cin >> angle2;

    std::cout << "Enter value of angle 3: " <<std::endl;
    std::cin >> angle3;

    int sum = angle1 + angle2 + angle3;

    if (angle1 >= 0 && angle1 <= 180 && angle2 >= 0 && angle2 <= 180 && angle3 >= 0 && angle3 <= 180) {
        if (sum == 180) {
            std::cout << "The sum of " << angle1 << ", " << angle2 << ", and " << angle3 << " is " << sum << std::endl;
            std::cout << "Thus angle 1 + angle 2 + angle 3 make a triangle";
        }
        else {
            std::cout << "The sum of " << angle1 << ", " << angle2 << ", and " << angle3 << " is " << sum << std::endl;
            std::cout << "The angles do not make a triangle.";
        }
    }
    else {
        std::cout << "The angles are not valid.";
    }

}
