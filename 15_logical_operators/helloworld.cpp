#include <iostream>

int main()
{

    // &&: check both are true
    // ||: check one of two is true
    // !: reverse the logical state of its operand

    {
        int temp;

        std::cout << "Enter the temp: ";
        std::cin >> temp;

        if (temp > 0 && temp < 30)
        {
            std::cout << "Temp is good";
        }
        else
        {
            std::cout << "Temp is bad";
        }
    }

    {
        int temp;

        std::cout << "Enter the temp: ";
        std::cin >> temp;

        if (temp < 0 || temp > 30)
        {
            std::cout << "Temp is bad";
        }
        else
        {
            std::cout << "Temp is good";
        }
    }

    return 0;
}