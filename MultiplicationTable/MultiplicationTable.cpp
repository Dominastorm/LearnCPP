#include <iostream>

int main()
{
    // Multiplication Table
    for (int i = 1; i <= 10; i++) {
        int mul = 0;
        for (int j = 1; j <= 10; j++) {
            mul += i;
            std::cout << i << " x " << j << " = " << mul << std::endl;
        }
        std::cout << std::endl;
    }
    system("pause > 0");
}
