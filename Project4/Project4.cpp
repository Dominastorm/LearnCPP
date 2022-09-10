#include <iostream>

int main()
{
    // User enters an integer
    // Prorgam returns if the number is odd or even
    
    // Declare the integer
    int number;
    
    // Take the value of integer as input from the user
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Tell the user if the number is odd or even
    std::cout << "The entered number is ";
    // = is used to assign values to a variable
    // == is used to check for equality and returns a bool
    // When the if statement is true, the block under it is executed
    if (number % 2 == 0) {
        std::cout << "even" << std::endl;
    }
    // a block is enclose in {}, but you don't need to use it
    // when there is only one line in it
    else
        std::cout << "odd" << std::endl;
    
    

    system("pause > 0");
}
