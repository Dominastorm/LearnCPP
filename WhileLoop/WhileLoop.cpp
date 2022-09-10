#include <iostream>

int main()
{
    // Write all the numbers between 100-500 that are
    // divisible by 3 and 5

    // Counter to keep track of the current number
    int counter = 100;
    while (counter <= 500) {
        if (counter % 3 == 0 && counter % 5 == 0)
            std::cout << counter << " is divisible by 3 and 5" << std::endl;
        // make sure to increment counter, otherwise you would create an infinite loop that could crash your system
        counter++;
    }

    system("pause > 0");
}
