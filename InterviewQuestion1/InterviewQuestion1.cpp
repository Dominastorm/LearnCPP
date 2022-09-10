#include <iostream>

int main()
{
	// Program for swapping two variables
	int a = 20; 
	int b = 10;

	// There are two ways to solve this
	// 1. Using a third variable
	std::cout << "USING A THIRD VARIABLE" << std::endl;

	std::cout << "Values before swapping: " << std::endl;
	std::cout << "a = " << a << " " << "b = " << b << std::endl;

	int aux = a;
	a = b;
	b = aux;

	std::cout << "Values after swapping: " << std::endl;
	std::cout << "a = " << a << " " << "b = " << b << std::endl << std::endl;

	// 2. Without using a third variable
	std::cout << "WITHOUT USING A THIRD VARIABLE" << std::endl;

	std::cout << "Values before swapping: " << std::endl;
	std::cout << "a = " << a << " " << "b = " << b << std::endl;

	a = a + b;
	b = a - b;
	a = a - b;

	std::cout << "Values after swapping: " << std::endl;
	std::cout << "a = " << a << " " << "b = " << b << std::endl;

	system("pause > 0");
}
