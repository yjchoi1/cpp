#include <iostream>

void simple_while(){
    int number;

    // Note:
    // If we just initiate variable but do not assign,
    // the default value is set to 0. 
    // So you need to start with `cin` as below. 
    // Otherwise, `while(number < 0)` will never be true since `number` is 0. 

    std::cout << "Enter a positive #";
    std::cin >> number;

    while(number < 0){
        std::cout << "Enter a positive #";
        std::cin >> number;
    } 

    std::cout << "The # is: " << number;
}

void do_while(){
    int number;

    do{
        std::cout << "Enter a positive #";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The # is: " << number;

}


int main() {
    // Your code here
    // simple_while();
    do_while();


    return 0;
}