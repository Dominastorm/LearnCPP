#include <iostream>

int main()
{
    // Guessing Game
    // There are two users
    // 1. Host User enters a number, that is cleared from console after he enters it
    // 2. Then, the guest users guesses the number the host user entered

    int hostUserNumber, guestUserNumber;
    
    // Ask the host user to enter the number
    std::cout << "Host: ";
    std::cin >> hostUserNumber;
    // Clear the console 
    system("cls");

    // Ask the guest user to guess the number
    std::cout << "Guest: ";
    std::cin >> guestUserNumber;
    // Clear the console
    system("cls");
    
    // Check whether the guess is correct or not
    
    /*
    if (hostUserNumber == guestUserNumber)
        std::cout << "Correct!";
    else
        std::cout << "Incorrect!";
     */
    
    // The above commented code can instead be implemented using ternary operator
    (hostUserNumber == guestUserNumber) ? std::cout << "Correct!" : std::cout << "Incorrect!";

    system("pause > 0");
}
