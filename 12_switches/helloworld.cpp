#include <iostream>

int main(){
    int month;

    std::cout << "Enter the moth (8-10): ";
    std::cin >> month;

    // if you use if-else, you need to repeat many code lines as follows:
    // if(month == 8){
    //     std::cout << "It's August";
    // }
    // else if (month == 9)
    // {
    //     std::cout << "It's September";
    // }
    // else if (month == 10)
    // {
    //     std::cout << "It's Oct";
    // }
    // else{
    //     std::cout << "Not implemented month";
    // }

    // Rather, we can use switch.
    switch (month)
    {
        case 8:
            std::cout << "It's August";
            break;
        case 9:
            std::cout << "It's Sep";
            break;
        case 10:
            std::cout << "It's Oct";
            break;
        default:
            std::cout << "Not implemented month";
            break;
    }
    
    return 0;
}