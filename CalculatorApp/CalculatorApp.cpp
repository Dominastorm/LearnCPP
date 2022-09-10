#include <iostream>

int main()
{
	// declare the variables for performing the operations
	float num1, num2;
	char operation;

	// Take the expression as input from the user
	std::cout << "**CodeBeauty Calculator**\n";
	std::cin >> num1 >> operation >> num2;

	// perform calculations based on the loperation
	switch (operation) {
	case '-':
		std::cout << num1 << operation << num2 << " = " << num1 - num2 << std::endl;
		break;
	case '+':
		std::cout << num1 << operation << num2 << " = " << num1 + num2 << std::endl;
		break;
	case '*':
		std::cout << num1 << operation << num2 << " = " << num1 * num2 << std::endl;
		break;
	case '/':
		std::cout << num1 << operation << num2 << " = " << num1 / num2 << std::endl;
		break;
	case '%':
		// % can't be performed on float
		
		// We will typecast the numbers to int if they are whole numbers
		bool isNum1Int, isNum2Int;
		isNum1Int = ((int)num1 == num1);
		isNum2Int = ((int)num2 == num2);

		// Calculate if input is valid
		if (isNum1Int && isNum2Int)
			std::cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2 << std::endl;
		// Give error to the user in case of invalid input
		else
			std::cout << "Error: Invalid Input! Can't perform modulo operation on float!";
		
		break;
	default:
		std::cout << "Invalid Input!";
		break;
	}





	system("pause > 0");
}
