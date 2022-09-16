#include <iostream>

int getMin(int numbers[], int size) {
	int min = numbers[0];
	for (int i = 1; i < size; i++)
		if (numbers[i] < min)
			min = numbers[i];
	return min;
}

int getMax(int numbers[], int size) {
	int max = numbers[0];
	for (int i = 1; i < size; i++)
		if (numbers[i] > max)
			max = numbers[i];
	return max;
}

void getMinAndMax(int numbers[], int size, int* min, int* max) {
	for (int i = 1; i < size; i++) {
		if (numbers[i] > *max)
			*max = numbers[i];
		if (numbers[i] < *min)
			*min = numbers[i];
	}
}

int main()
{
	int numbers[5] = { 5, 4, -2, 29, 6 };

	std::cout << "Min is " << getMin(numbers, 5) << std::endl;
	std::cout << "Max is " << getMax(numbers, 5) << std::endl;

	int min = numbers[0];
	int max = numbers[0];

	// Passing a parameter by reference (passing the address)
	getMinAndMax(numbers, 5, &min, &max);
	std::cout << "min is " << min << std::endl;
	std::cout << "max is " << max << std::endl;


	system("pause > 0");
	return 0;
}