#include <iostream>

int main()
{
	// Binary Operators - perform operations on two opearnds
	// +, -, *, /, %

	// Addition
	std::cout << 5 + 2 << std::endl;

	// Subtraction
	std::cout << 5 - 2 << std::endl;

	// Division
	// The result of dividing two integers will result an integer
	// Which means, this program will return 2 instead of 2.5
	std::cout << 5 / 2 << std::endl;

	// To get the actual result, at least one of the numbers will have to be a float
	std::cout << 5.0 / 2 << std::endl;
	std::cout << 5 / 2.0 << std::endl;
	std::cout << 5.0 / 2.0 << std::endl;

	// Multiplication
	std::cout << 5 * 2 << std::endl;

	// Modulo 
	// This returns the remainder after division
	std::cout << 5 % 2 << std::endl;

	// Unary operators - perform operation on one operand
	// ++ to increment value
	// -- to decrement value
	int counter = 7;
	counter++;
	std::cout << counter << std::endl;
	counter--;
	std::cout << counter << std::endl;

	// There are two types of increment and decrement operations
	// Post increment - Value changes after the statement
	counter++;
	// Pre increment - Value changes before the statement
	++counter;

	// You can clear the console by executing the cls command 
	system("cls");

	// Relational operators - Used to check relation between two values
	// <, >, <=, >=, ==, !=
	// It returns output as 0 (false) or 1 (true)
	int a = 5, b = 5;
	std::cout << (a >= b);
	system("cls");

	// Logical Operators - Perform operations on Boolean values
	// && - AND
	// || - OR
	// ! - NOT
	std::cout << !(a == 5 || b == 5);
	system("cls");

	// Operator Precedence
	// Arithmetic > Relational > Logical
	// Here, + is evaluated before ==
	// So, the result if 0
	std::cout << (a == 5 && b == 5 + 3);
	system("cls");

	// Assignment Operators
	// =, +=, -=, *=, %=
	
	// Assign the value of lhs to rhs
	int x = 5;

	// add lhs to rhs and store in lhs
	// this is the same as x = x + 7
	x += 7;

	// The other assignment operations work in a similar manner
	// They are also called augmented assignment operators

	system("pause > 0");
}
