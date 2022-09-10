#include <iostream>

int main()
{
    int year, month;
    std::cout << "Enter the year: ";
    std::cin >> year;
    std::cout << "Enter the month: ";
    std::cin >> month;

    switch (month)
    {
    // February
    // 29 days - leap year
    // 28 days - otherwise
    case 2:
        (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
            std::cout << "29 Days Month" << std::endl:
            std::cout << "28 Days Month" << std::endl;
        break;
    // 30 days - April, June, September, November
    case 4:
    case 6:
    case 9:
    case 11:
        std::cout << "30 Days Month" << std::endl;
        break;
    // 31 days - January, March, May, July, August, October, December
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        std::cout << "31 Days Month" << std::endl;
        break;
    default:
        std::cout << "Invalid Input" << std::endl;
        break;
    }
    system("pause > 0");
}
