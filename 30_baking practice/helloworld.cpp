#include <iostream>
#include <iomanip> // has a function to set some precision for floating point numbers

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    // Your code here
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "****************\n";
        std::cout << "Enter your choise\n";
        std::cout << "****************\n";
        std::cout << "1. show balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withraw\n";
        std::cout << "4. exit\n";
        std::cin >> choice;

        std::cin.clear();  // this function will reset any error flags when the standard input fails to interpret the input
        fflush(stdin); // clear the input buffer. When we hit enter, we have new line char within our input buffer. We just need to flush that

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            std::cout << "Exit\n";
            break;
        default:
            std::cout << "Not a valid choice\n";
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: " << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit(){

    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "That is not a valid amount \n";
    }
}

double withdraw(double balance){
    double amount = 0;

    std::cout << "Enter amount to be withdrawed: ";
    std::cin >> amount;

    if(amount < 0){
        return amount;
    }
    else if (amount > balance)
    {
        std::cout << "Not enough money \n";
    }
    
    else{
        std::cout << "That is not a valid amount \n";
    }
}