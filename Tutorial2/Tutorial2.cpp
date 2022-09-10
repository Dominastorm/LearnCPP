#include <iostream>

int main()
{
    // variable of type float that stores the annual salary
    float annualSalary;
    // prompt the user for input
    std::cout << "Please enter your annual salary: ";
    // take input from the user
    std::cin >> annualSalary;


    // variable that stores the monthly salary
    // stores the value of operation on another variable
    float monthlySalary = annualSalary / 12;

    // return the output to the console
    std::cout << "Your monthly salary is " << monthlySalary << std::endl;

    // when you calculate the value directly when giving the output, you 
    // won't be able to access it later, because you didn't store it
    std::cout << "In 10 years, you will earn " << annualSalary * 10;

    // when you are using characters (length = 1), you need to put them in single quotes   
    char character = 'a';

    // Naming Variables
    // 1. Make sure to name your variables such that their purpose is self-explanatory
    // 2. The only special character you can use while naming a variable is underscore (_)
    // 3. You can use digits in the variable names, but a digit can't be the first character
    // 4. You cannot have whitespaces in your variable names
    // 5. Use camelCase to name variables

    system("pause>0");
}
