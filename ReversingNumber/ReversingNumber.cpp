#include <iostream>

int main()
{
    // Reversing number
    int number, reversedNumber = 0;
    std::cout << "Enter number: ";
    std::cin >> number;

    // Return number if it is 0
    if (number == 0)
        reversedNumber = number;

    // Reverse the number
    while (number != 0) {
        reversedNumber *= 10;
        reversedNumber += number % 10;
        number /= 10;
    } 

    // Write the reversed number in the console
    std::cout << "The reversed number is " << reversedNumber;

    system("pause > 0");
}
