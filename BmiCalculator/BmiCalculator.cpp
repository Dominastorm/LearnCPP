#include <iostream>

int main()
{
    // BMI Calculator
    // BMI = weight (kg) / (height * height) (m^2)
    // < 18.5      -> Underweight
    // 18.5 - 25.0 -> Normal
    // > 25.0      -> Overweight

    // Take weight and height as input from the user
    float weight, height;
    std::cout << "Enter your weight (in kg): ";
    std::cin >> weight;
    std::cout << "Enter your height (in m): ";
    std::cin >> height;

    // Calculate the BMI
    float bmi = weight / (height * height);

    // Tell the user their BMI
    std::cout << "Your BMI is " << bmi << std::endl;

    // Tell the user which category they belong to
    if (bmi < 18.5)
        std::cout << "You are underweight!" << std::endl;
    else if (bmi > 25.0)
        std::cout << "You are overweight!" << std::endl;
    else
        std::cout << "Your weight is normal!" << std::endl;

    system("pause > 0");
}
