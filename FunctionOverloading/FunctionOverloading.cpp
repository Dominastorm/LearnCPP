#include <iostream>

// We can perform function overloading in c++ to define a function which can be called in multiple ways
// Each of these will have a separate function definition which will be called based the parameters passed
int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
    // calling the definition with two integers
    std::cout << sum(4, 3) << std::endl;
    // calling the definition with two double numbers
    std::cout << sum(4.5, 3.8) << std::endl;
    // calling the definition with three floating point numbers
    std::cout << sum(4.5, 3.8, 4.2) << std::endl;

    system("pause > 0");
}

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

float sum(float a, float b, float c) {
    return a + b + c;
}
