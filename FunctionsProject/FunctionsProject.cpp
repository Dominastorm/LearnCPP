#include <iostream>

// We need to declare a function if the function definition is below the invocation 
// (below main function in this case)
// This makes it easier to read code, especially when working with a large codebase
// SHORTCUT: Press F12 (or Ctrl + Click) to go to function definition
void function();

// Main function is the main function
// It is executed first when you execute a program
int main()
{
	std::cout << "Hello from main()" << std::endl;
	// Invoking the function
	function();
	function();
	function();

	// Functions make reusable code easy to write 
	// They also make it easier to understand the code

	system("pause > 0");
}

// First thing you write before the function name is the return type
// void means that the function does not return anything
// You then write the function name followed by the parameters it takes in parentheses
void function() {
	// This line will print only when the function is invoked
	std::cout << "Hello from function()" << std::endl;
}
