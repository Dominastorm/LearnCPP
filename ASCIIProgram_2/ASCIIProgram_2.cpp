#include <iostream>

int main()
{
    // You can declare more than one variables in one line
    // but only if they are of the same datatype
    char c1, c2, c3, c4, c5;
    std::cout << "Enter 5 letters: ";
    
    // Taking characters as input
    // Note: This input only looks for 5 characters, it doesn't take 
    // into account tabs and spaces
    std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
    
    // Writing the ASCII values of the characters to the console
    std::cout << "ASCII message: " << int(c1) << " "
        << int(c2) << " " << int(c3) << " " << int(c4)
        << " " << int(c5);

    system("pause > 0");
}
