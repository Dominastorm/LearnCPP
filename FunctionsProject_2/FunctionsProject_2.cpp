#include <iostream>

// The function takes a string as a parameter
// We don't need to write variable name of parameter while declaring function
void introduceMe(std::string);

// Can also pass multiple parameters into the function
// If your function has a default parameter and you are using a declaration
// The default value must be mentioned in the declaration and not in the definition
// Default parameters can't be followed by non-default parameters+
void introduceMeProperly(std::string, std::string, int age = 0);

int main()
{
    // Taking input from the user and passing them into the function
    // The dataype of all the arguments passed into the function
    // must match the datatype of the parameters defined in the function
    std::string name, city;
    int age;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your city: ";
    std::cin >> city;
    std::cout << "Enter your age: ";
    std::cin >> age;

    introduceMeProperly(name, city, age);

    // The function uses the default value when you do not specify the value
    //introduceMeProperly("Aryan", "Lucknow");

    system("pause > 0");
}

void introduceMe(std::string name) {
    std::cout << "My name is " << name << std::endl;
}

// You can give your parameters a default value
void introduceMeProperly(std::string name, std::string city, int age) {
    std::cout << "My name is " << name << std::endl;
    std::cout << "I am from " << city << std::endl;
    // We will not write the age if the user doesn't enter it or enters 0
    if (age != 0) std::cout << "I am " << age << " years old" << std::endl;
}