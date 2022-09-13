#include <iostream>

void showMenu() {
    std::cout << "****************MENU*****************" << std::endl;
    std::cout << "1. Check balance" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "*************************************" << std::endl;
}

int main()
{
    // Check balance, deposit, withdraw and show menu
    int option;
    double balance = 500;
    
    do {
        showMenu();
        std::cout << "Option: ";
        std::cin >> option;

        // clear the console
        system("cls");

        switch (option)
        {
        case 1:
            std::cout << "Balance is: " << "$" << balance << std::endl;
            break;
        case 2:
            double depositAmount;
            std::cout << "Deposit amount: ";
            std::cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3:
            double withdrawAmount;
            std::cout << "Withdraw amount: ";
            std::cin >> withdrawAmount;
            // Check if enough amount is available to withdraw
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                std::cout << "Not enough balance!" << std::endl;
            break;
        }
    } while (option != 4);

    system("pause > 0");
}
