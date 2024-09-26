#include <iostream>

// Local var: variables declared inside the function or black {}.
// Global var: variables declared outsize of all functions.


void printNum(int myNum);

int main() {
    // Your code here
    {
        int myNum = 1; 
        printNum(myNum);
    }

    return 0;
}

void printNum(int myNum){

        std::cout << myNum;  
}