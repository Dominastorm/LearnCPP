#include <iostream>

int main()
{
    // ASCII
    // Every character is mapped to an integer value called ASCII value
    
    // We can use type casting to cast a variable to another datatype
    std::cout << (int)'a' << std::endl;
    // It can also be done like this
    std::cout << int('a') << std::endl;
    
    // We can also do the opposite, to convert ASCII to char
    std::cout << char(65) << std::endl;

    // ASCII uses 7 bits to represent a character, so it can hold only
    // 2^7 = 128 characters
    // Other standards like Extended ASCII, UTF-8, Unicode etc. are used
    // to represent more characters

    system("pause > 0"); 
}
