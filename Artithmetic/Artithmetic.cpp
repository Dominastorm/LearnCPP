#include <iostream>

int main()
{
	// Grading System
	// Take the grades of three subjects as input from the user
	// The grade must lie between 1 and 5 (inclusive)
	// Return the sum and average of these grades
	
	int grade, sum = 0;

	for (int i = 0; i < 3; i++) {
		do {
			std::cout << "Enter grade " << i + 1 << ": ";
			std::cin >> grade;
		} while (grade < 1 || grade > 5);
		sum += grade;
	}
	std::cout << "Sum = " << sum << std::endl;
	std::cout << "Average = " << sum / 3.0 << std::endl;

	system("pause > 0");
}
