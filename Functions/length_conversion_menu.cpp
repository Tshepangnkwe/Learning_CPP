

#include <iostream>

const double CONVERSION = 2.54;                    // Conversion factor from inches to centimeters
const int INCHES_IN_FOOT = 12;                     // Number of inches in a foot
const int CENTIMETERS_IN_METER = 100;              // Number of centimeters in a meter

void showChoices();                                 // Function prototype to display menu choices
void feetAndInchesToMetersAndCent(int f, int in, int& mt, int& ct);  // Function prototype for conversion from feet and inches to meters and centimeters
void metersAndCentTofeetAndInches(int mt, int ct, int& f, int& in);  // Function prototype for conversion from meters and centimeters to feet and inches

int main() {
    int feet, inches;                             // Variables for feet and inches
    int meters, centimeters;                      // Variables for meters and centimeters
    int choice;                                   // Variable to store user's choice from the menu

    do {
        showChoices();                            // Display menu choices
        std::cin >> choice;                       // Read user's choice
        std::cout << std::endl;

        switch (choice) {
            case 1:
                std::cout << "Enter feet and inches: ";
                std::cin >> feet >> inches;       // Read feet and inches from the user
                std::cout << std::endl;
                feetAndInchesToMetersAndCent(feet, inches, meters, centimeters);  // Call conversion function
                std::cout << feet << " feet(foot), " << inches << " inch(es) = "
                          << meters << " meter(s), " << centimeters << " centimeter(s)." << std::endl;
                break;

            case 2:
                std::cout << "Enter meters and centimeters: ";
                std::cin >> meters >> centimeters; // Read meters and centimeters from the user
                std::cout << std::endl;
                metersAndCentTofeetAndInches(meters, centimeters, feet, inches);  // Call conversion function
                std::cout << meters << " meter(s), " << centimeters << " centimeter(s) = "
                          << feet << " feet(foot), " << inches << " inch(es)." << std::endl;
                break;

            case 99:
                break;

            default:
                std::cout << "Invalid input." << std::endl;
        }
    }
    while (choice != 99);                          // Continue the loop until the user chooses to quit

    return 0;
}

void showChoices() {
    std::cout << "Enter--" << std::endl;
    std::cout << "1: To convert from feet and inches to meters "
              << "and centimeters." << std::endl;
    std::cout << "2: To convert from meters and centimeters to feet "
              << "and inches." << std::endl;
    std::cout << "99: To quit the program." << std::endl;
}

void feetAndInchesToMetersAndCent(int f, int in, int& mt, int& ct) {
    int inches;
    inches = f * INCHES_IN_FOOT + in;             // Convert feet and inches to inches
    ct = static_cast<int>(inches * CONVERSION);   // Convert inches to centimeters
    mt = ct / CENTIMETERS_IN_METER;               // Calculate meters from centimeters
    ct = ct % CENTIMETERS_IN_METER;               // Calculate remaining centimeters
}

void metersAndCentTofeetAndInches(int mt, int ct, int& f, int& in) {
    int centimeters;
    centimeters = mt * CENTIMETERS_IN_METER + ct; // Convert meters to centimeters
    in = static_cast<int>(centimeters / CONVERSION);  // Convert centimeters to inches
    f = in / INCHES_IN_FOOT;                     // Calculate feet from inches
    in = in % INCHES_IN_FOOT;                    // Calculate remaining inches
}
