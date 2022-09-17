#include <iostream>

/*
You can get the PVS-Studio extension that you can use to debug your code
*/

int main()
{	
	int savedMoney[5] = { 100, 200, 300, 400, 500 };

	int total = 0;
	// Here, PVS-Studio will tell us that array overrun is possible
	for (int i = 0; i <= 5; i++)
		total += savedMoney[i];

	std::cout << "Total: " << total;
	system("pause > 0");
}