#include <iostream>

// Primer number checker that takes in the number as input
// and returns whether it is prime or not
bool isPrimeNumber(int number);
// Improved, cleaner implementation
bool isPrimeNumberNew(int number);

int main()
{
	// Prime number checker
	int number;
	std::cout << "Enter the number: ";
	std::cin >> number;

	// Check whether the function is prime or not by calling function
	bool isPrimeFlag = isPrimeNumberNew(number);
	// Write the output to the console
	std::cout << "The number " << number << " is" << ((isPrimeFlag) ? " " : " not ") << "a prime number" << std::endl;

	// We can reuse the function by calling it as many times as we need
	// Finding all the prime numbers up to n
	int n;
	std::cout << "Enter the number up to which you want to find prime numbers: ";
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		isPrimeNumber(i) && std::cout << i << " is a prime number" << std::endl;
	}
	system("pause > 0");
}

bool isPrimeNumber(int number) {
	bool isPrimeFlag = true;
	// Iterate through all numbers form 2 up to the number and check for divisibility
	for (int i = 2; i < number; i++) {
		// If it is divisible by any number in this range it is not a prime number
		if (number % i == 0) {
			isPrimeFlag = false;
			break;
		}
	}
	// Return whether the number is prime or not
	return isPrimeFlag;
}


// The variable isPrimeFlag is unnecessary, so we can avoid using that
bool isPrimeNumberNew(int number) {
	// Iterate through all numbers form 2 up to the number and check for divisibility
	for (int i = 2; i < number; i++) {
		// If it is divisible by any number in this range it is not a prime number
		// There is no need for break when we are returning value, because it exits the function
		if (number % i == 0)
			return false;
	}
	return true;
}

