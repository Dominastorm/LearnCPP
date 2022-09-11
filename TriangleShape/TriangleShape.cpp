#include <iostream>
#include <iomanip>

int main()
{
    // Triangle Pattern
    // Create a triangle pattern using the length and symbol entered by the user
    int length;
    char symbol;
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter symbol: ";
    std::cin >> symbol;

    // increasing triangle pattern
    for (int i = 0; i <= length; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << std::setw(3) << symbol;
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << std::endl;

    // decreasing triangle pattern
    for (int i = length; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            std::cout << std::setw(3) << symbol;
        }
        std::cout << std::endl;
    }

    system("pause > 0");
}
