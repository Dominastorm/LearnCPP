#include <iostream>

// Print out the value of the integer passed into it
void printNumber(int* numberPtr) {
	std::cout << *numberPtr << std::endl;
}

// Print out the value of the character passed into it
void printLetter(char* charPtr) {
	std::cout << *charPtr << std::endl;
}

// We cannot keep doing this for every single datatype
// So, we will create a method with void pointer
void print(void* ptr, char type) {
	switch (type)
	{
	// cast the pointer into an integer pointer -> (int*)ptr
	// then to access the address, dereference the pointer
	case 'i': 
		std::cout << *((int*)ptr) << std::endl;
		break;
	case 'c': 
		std::cout << *((char*)ptr) << std::endl;
		break;
	default:
		break;
	}
}

int main()
{
	int number = 5;
	char letter = 'a';
	/*printNumber(&number);
	printLetter(&letter);*/

	print(&number, 'i');
	print(&letter, 'c');

	system("pause > 0");
	return 0;
}