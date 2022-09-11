#include <iostream>
#include <iomanip>

int main()
{
	// Display a rectangle using the width, height and symbol specified by the user
	int height, width;
	char symbol;
	std::cout << "Enter height: ";
	std::cin >> height;
	std::cout << "Enter width: ";
	std::cin >> width;
	std::cout << "Enter symbol: ";
	std::cin >> symbol;

	for (int h = 0; h < height; h++) {
		for (int w = 0; w < width; w++) {
			// setw (from iomanip) sets the width of the output following it
			std::cout << std::setw(3) << symbol;
		}
		std::cout << std::endl;
	}

	system("pause > 0");
}
