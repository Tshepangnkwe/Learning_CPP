#include <iostream>
#include <cmath> 

void tempConversion() {

    int choice;
    double temp; 

    // Menu for the user to choose the temperature scale
    std::cout << "*****Tshepang's TempConversion Tool*****" << std::endl;
    std::cout << "Choose temperature scale:\n";
    std::cout << "1. Celsius to kelvin\n";
    std::cout << "2. kelvin to Celsius\n";
    std::cout << "3. Fahrenheit to Celsius\n";
    std::cout << "4. Celsius to Fahrenheit\n";
    std::cout << "5. Fahrenheit to kelvin\n";
    std::cout << "6. kelvin to Fahrenheit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    
    switch (choice) {
        double tempCelsius;
        double tempFahrenheit;
        double tempKelvin;
        case 1:
            // Celsius to Kelvin conversion
            std::cout << "Enter temperature in Celsius: ";
            std::cin >> tempCelsius;
            temp += 273.15;  // Conversion formula
            std::cout << tempCelsius << " degrees Celsius in kelvins is : " << temp << " kelvins." << std::endl;
            break;

        case 2:
            // Kelvin to Celsius conversion
            std::cout << "Enter a temperature in Kelvin \n";
            std::cin >> tempKelvin;
            temp -= 273.15; // Conversion formula
            std::cout << tempKelvin << " kelvins in Celsius is : " << temp << " degrees Celsius." << std::endl;
            break;

        case 3:
            // Fahrenheit to Celsius conversion
            std::cout << "Enter a temperature in Fahrenheit \n";
            std::cin >> tempFahrenheit;
            temp = tempFahrenheit-32 * 5/9;
            std::cout << tempFahrenheit << " Fahrenheits in Celsius is : " << temp << " degrees Celsius." << std::endl;
            break;


        case 4:
            // Celsius to Fahrenheit conversion
            std::cout << "Enter a temperature in Celsius: \n";
            std::cin >> tempCelsius;
            temp = tempCelsius *9/5 + 32; // Conversion formula
            std::cout << tempCelsius << " Celsius in Fahrenheits is : " << temp << " degrees Fahrenheits." << std::endl;
             break;

        case 5:
            // Fahrenheit to Kelvin conversion
            std::cout << "Enter a temperature in Kelvin \n";
            std::cin >> tempFahrenheit;
            temp = tempFahrenheit-32 * 5/9 + 273.15; // Conversion formula
            std::cout << tempFahrenheit << " Fahrenheits in kelvins is : " << temp << " kelvins." << std::endl;
            break;

        case 6:
            // Kelvin to Fahrenheit conversion
            std::cout << "Enter a temperature in Kelvin \n";
            std::cin >> tempKelvin;
            temp = tempKelvin-273.15 * 9/5 + 32; // Conversion formula
            std::cout << tempKelvin << " kelvins in Fahrenheits is : " << temp << " degrees Fahrenheits." << std::endl;
            break;

        default:
            std::cout << "Invalid choice\n";

    }
}



int main() {

    tempConversion();
    return 0;
}