#include <iostream>

int main()
{
	int n = 5;
	// You can get the address of the variable by putting & before it
	// This is called referencing
	int* ptr = &n;
	std::cout << ptr << std::endl;
	
	// To access the value stored at the pointer's address
	// We dereference the pointer by using * before it
	std::cout << *ptr << std::endl;

	// We can modify this value
	*ptr = 10;
	std::cout << *ptr << std::endl;
	// This changes the value of n as well
	std::cout << n << std::endl;

	// Note: Pointer and the variable it is pointing to have to be the
	// same datatype

	// The following code is invalid, because the pointer does not point 
	// to any address
	// int* ptr2;
	// *ptr2 = 12;

	system("pause > 0");
	return 0;
}
