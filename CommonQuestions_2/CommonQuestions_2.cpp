#include <iostream>

void myFunction() {
	int* ptr = new int[5];
	ptr[2] = 10;
	std::cout << "Hi, I am = " << ptr[2];

	// The following information can be learnt by using PVS-Studio
	
	// Since, we have not deleted the pointer after using it, memory leaks are possible
	// Also, becuase this is inside a function, you can not release the memory later
	// You need to do it in within the function itself
	
	// The following fix is also wrong (because it is an array pointer)
	// delete ptr;

	// The correct fix
	delete[] ptr;
}

int main()
{
	myFunction();

	system("pause > 0");
	return 0;
}