#include <iostream>

int main() {
    // Memory address: a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    std::string name = "bro";
    int ange = 21;
    bool student = true;

    std::cout << &name << '\n';

    return 0;
}