#include <iostream>

int main()
{
	int rows, cols;
	std::cout << "Rows, Cols: ";
	std::cin >> rows >> cols;
	std::cout << rows << ' ' << cols;

	// create the outer array
	int** table = new int*[rows];
	for (int i = 0; i < rows; i++) {
		// create the inner array
		table[i] = new int[cols];
	}

	// assigning a value
	table[1][2] = 88;

	// we will need to de-allocate from the inside out
	// i.e. reverse of the order of allocation
	for (int i = 0; i < rows; i++) {
		// delete the inner array
		delete[] table[i];
	}
	// delete the outer array
	delete[] table;
	// set the pointer to NULL
	table = NULL;

	system("pause > 0");
	return 0;
}