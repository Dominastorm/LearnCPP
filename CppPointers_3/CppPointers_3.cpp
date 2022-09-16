#include <iostream>

int main() {
	int luckyNumbers[5] = { 2, 3, 5, 7, 9 };
	
	// the array behaves as a pointer to the first element
	std::cout << luckyNumbers << std::endl;

	// This is the same as the first element
	std::cout << &luckyNumbers[0] << std::endl;

	// we can access other elements in the array by adding to the pointer
	// which means both of the following are the same
	std::cout << &luckyNumbers[2] << std::endl;
	std::cout << *(luckyNumbers + 2) << std::endl;

	// Taking values into the array using for loop
	for (int i = 0; i < 5; i++) {
		std::cout << "Number: ";
		std::cin >> luckyNumbers[i];
	}

	// Printing out the values from the array
	for (int i = 0; i < 5; i++) {
		std::cout << *(luckyNumbers + i) << " ";
	}
	 
	system("pause > 0");
	return 0;
}