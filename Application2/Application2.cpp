#include <iostream>

int main()
{
    // DATATYPES

    // int stores integers
    int yearOfBirth = 2002;

    // char stores a character (use single quotes)
    char gender = 'm';

    // bool stores Boolean (true or false)
    bool isOlderThan18 = true;

    // float stores floating point numbers (rational numbers)
    float averageGrade = 4.5;

    // double is double the size of float (8 Bytes = 4 Bytes * 2)
    // You can use ' for separating numbers for readability
    // (This has no effect on the actual value stored)
    double balance = 4'523'342'432;

    // You can use sizeof() to find the size of a datatype
    std::cout << "Size of int is " << sizeof(int) << " Bytes" << std::endl;

    // You can find the minimum and maximum value that int can take using reserved keywords
    std::cout << "The minimum value int can take is " << INT_MIN << std::endl;
    std::cout << "The maximum value int can take is " << INT_MAX << std::endl;

    // Unsigned int uses all 32 bits to store positive value
    std::cout << "Size of unsigned int is " << sizeof(unsigned int) << " Bytes" << std::endl;
    std::cout << "The maximum value uint can take is " << UINT_MAX << std::endl;

    system("pause>0");
}
