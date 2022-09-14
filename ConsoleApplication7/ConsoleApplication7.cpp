#include <iostream>

int iterative_sum(int, int);
int recursive_sum(int, int);

int main()
{
	// Find sum of all numbers between m and n (inclusive)
	int m, n;
	std::cout << "Enter lower limit: ";
	std::cin >> m;
	std::cout << "Enter upper limit: ";
	std::cin >> n;

	// In case the user does not follow instructions, swap m and n
	if (m > n) {
		int temp = m;
		m = n;
		n = temp;
	}

	int sum = recursive_sum(m, n);
	std::cout << "Sum = " << sum;

	system("pause > 0");
}

int iterative_sum(int m, int n) {
	int sum = 0;
	for (int i = m; i <= n; i++) {
		sum += i;
	}
	return sum;
}

// You must always have a base case when performing recursion 
// to break out of the recursive loop
int recursive_sum(int m, int n) {
	// Base case
	if (m == n) 
		return m;
	// Recursive case
	return m + recursive_sum(m + 1, n);
}
