#include <iostream>

int main()
{
	// User enters side lengths of a triangle (a, b, c)
	// The program returns the type of triangle-
	// Scalene, Isosceles or Equilateral

	// Declare the variables
	float a, b, c;

	// Take the side lengths as input from the user
	std::cout << "Enter the lengths of the three sides: ";
	std::cin >> a >> b >> c;

	// You can nest if-else blocks inside each other to 
	// perform second check only if the first one is true

	// Check if the triangle is valid
	if (a + b > c && b + c > a && c + a > b) {
		// Tell the user the type of the triangle
		std::cout << "The triangle is ";
		// Check if the triangle is equilateral
		if (a == b && b == c)
			std::cout << "Equilateral" << std::endl;
		// If it is not equilateral
		else {
			// Check if it is scalene
			if (a != b && b != c && c != a)
				std::cout << "Scalene" << std::endl;
			// If it is not equilateral or scalene, it is isoscelec
			else
				std::cout << "Isosceles" << std::endl;
		}
		
	}
	// Tell the user if the triangle is invalid
	else
		std::cout << "The triangle is not valid. Sum of two sides must be greater than the third side" << std::endl;


	

	system("pause > 0");
}
