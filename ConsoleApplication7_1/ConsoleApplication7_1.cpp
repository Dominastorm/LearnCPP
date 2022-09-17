#include <iostream>

int main()
{
	int size;
	std::cout << "size: ";
	std::cin >> size;
	// Size of the array has to be known at compile time
	// i.e. the following is invalid
	// int myArray[size];
	
	// So, you can use dynamic memory
	// We allocate memory to the array
	int* myArray = new int[size];

	// Take the array values as input
	for (int i = 0; i < size; i++) {
		std::cout << "Array[" << i << "]: ";
		std::cin >> myArray[i];
	}

	// Print out the array
	for (int i = 0; i < size; i++) {
		// There are two ways to dereference the values of the array
		//std::cout << myArray[i] << " ";
		std::cout << *(myArray + i) << " ";
	}

	// We must always de-allocate the memory we used
	// i.e delete command must always accompany the new command
	delete[]myArray;
	// And then point the array to NULL, to avoid crashes
	myArray = NULL;

	system("pause > 0");
}