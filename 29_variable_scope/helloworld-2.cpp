// Global var
#include <iostream>

int myNum = 3;

void printNum();

int main() {
    // Your code here

    // Note: if a local var is defined after the global var, 
    // the funciton will use the local var:
    // int myNum = 2;
    printNum();
    std::cout << myNum;  // the result returns the local var 2, not 3, which is the global var.

    // if you want to keep using the global var, use the scope resolution operation, `::`
    std::cout << ::myNum;

    return 0;
}

void printNum(){
    std::cout << myNum;  
}