#include <iostream>

int main() {
    // Pointer: variable that stores a memory address of a variable.
    // &: address-of operator
    // *: dereference operator

    std::string name = "choi";
    int age = 21;
    
    std::string *pName = &name;
    int* pAge = &age;

    std::string freePizzas[5] = {"a", "b", "c"};
    // The following will cuase an error, becuase the array is already an address 
    // std::string *pFreePizzas = &freePizzas;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';

    // As mentioned above, our array, freePizzas, is already an address, so it will return an address
    std::cout << freePizzas << '\n';
    // If you want to get the values, use dereference operator. 
    std::cout << *freePizzas << '\n';

    return 0;
}