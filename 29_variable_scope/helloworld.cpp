#include <iostream>

// Local var: variables declared inside the function or black {}.
// Global var: variables declared outsize of all functions.


void printNum();

int main() {
    // Your code here
    {
        int myNum = 2; //yc: you define a local variable
        void printNum();
    }

    return 0;
}

void printNum(){
        int myNum = 1;

        std::cout << myNum;  //yc: printNum does not have info about myNum since it was a local variable isolcated from this function
}