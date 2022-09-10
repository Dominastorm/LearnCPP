#include <iostream>

int main()
{
    // User has three tries to guess his pin, after which he will get blocked

    int usersPin = 1234, pin, errorCounter = 0;

    do {
        // Take the pin as input from the user
        std::cout << "PIN: ";
        std::cin >> pin;

        // Check if the pin is valid
        if (pin != usersPin)
            errorCounter++;
    
    } while (errorCounter < 3 && pin != usersPin);

    // If user entered the pin within the allowed number of tries
    if (errorCounter < 3)
        std::cout << "Loading...";
    // Otherwise
    else
        std::cout << "You have been Blocked!" << std::endl;

    system("pause > 0");
}
