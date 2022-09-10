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

    system("pause>0");
}
