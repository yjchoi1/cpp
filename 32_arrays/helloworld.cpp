#include <iostream>

int main() {
    // Your code here

    std::string cars[] = {"Corvett", "Accord", "Mustang"};

    std::cout << cars;  // it will display the memory address of `cary` array.

    // if you want to display one of the element of the array,
    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';

    // Note
    // * arrays can only contain the same data type


    // You can first init the array, and assign the values later.
    // However, you need to set a size in `[]` when you init.
    std::string fruits[2];
    fruits[0] = "banana";
    fruits[0] = "apple";


    return 0;
}