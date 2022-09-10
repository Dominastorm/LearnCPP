#include <iostream>

int main()
{
    // Count the number of digits in a number

    // Take number as input
    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    // if number is 0
    if (number == 0)
        std::cout << "1 digit" << std::endl;
    else {
        // change negative number to positive to count digits
        if (number < 0)
            number *= -1;

        // count number of digits
        int counter = 0;
        while (number > 0) {
            number /= 10;
            counter++;
        }
        if (counter == 1)
            std::cout << "1 digit" << std::endl;
        else
            std::cout << counter << " digits" << std::endl;
    }

    system("pause > 0");
}
