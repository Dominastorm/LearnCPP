#include <iostream>

int main()
{
    // Calculate factorial of number
    // n! = n * (n-1) * (n-2) ..... 3 * 2 * 1

    int number, factorial = 1;
    std::cout << "Number: ";
    std::cin >> number;

    // Format : start, stop condition, increment/decrement
    // Make sure to start from 1 and not 0 because 
    // any number multiplied with 0 will be 0
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    // The above loop can also be done in opposite order
    // for (int i = numebr; i >= 1; i--)

    std::cout << number << "! = " << factorial << std::endl;

    system("pause > 0");
}
