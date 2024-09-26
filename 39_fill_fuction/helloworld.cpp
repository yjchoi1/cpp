#include <iostream>

// A brootforce way of making an array with 10 elements
void main1() {
    // Your code here

    
    std::string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};

    std::cout << "main1" << '\n';
    for(std::string food : foods){
        std::cout << food << '\n';
    }
}

// Use fill function
void main2() {
    // syntax:
    // fill(begin, end, value)

    
    std::string foods[100];

    fill(foods, foods + 50, "pizza");
    fill(foods + 50, foods + 100, "burger");
    // Note:
    // In C++, when you use the name of an array (like arr) without brackets, 
    // it actually represents the starting address (or a pointer) to the first element of the array. 
    // This is why arr can be used as the starting position in functions like in `fill`.

    // Think of an array as a row of houses. 
    // The name of the array, arr, is like the address of the first house. 
    // If you know this address, you can find all the houses in the row by moving forward. 
    // arr + 0 is the first house, arr + 1 is the second house, and so on. 
    // When using `fill`, you are just telling it to go to the first house (arr) and keep filling up to the house just beyond the fifth one (arr + 5).

    std::cout << "main2" << '\n';
    for(std::string food : foods){
        std::cout << food << '\n';
    }
}

int main(){
    main1();
    main2();
    return 0;
}