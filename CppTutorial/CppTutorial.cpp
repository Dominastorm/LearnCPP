#include <iostream>

// To perform in place swapping, we need to pass the variables by reference using &

// To avoid having to create the same function for multiple datatypes, we use generics
// Generics can be created using the template keyword. Conventionally, T is used as typename
// You can also write 'class' instead of 'typename'
template<typename T>
void Swap(T &a, T &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 5, b = 7;
	std::cout << a << " - " << b << std::endl;
	// You can specify the type with which you are invoking the function
	// This is not necessary, because it can detect on its own
	Swap<int>(a, b);
	std::cout << a << " - " << b << std::endl;

	char c = 'c', d = 'd';
	std::cout << c << " - " << d << std::endl;
	Swap(c, d);
	std::cout << c << " - " << d << std::endl;

	system("pause > 0");
	return 0;
}