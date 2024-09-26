#include <iostream>

int main() {
    // Your code here

    double gpa = 2.5; 
    std::string name = "Hello world";
    char grades[] = {'a', 'b', 'c'};

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(double) << " bytes\n";

    // String just holds to address where the strings are located.
    // So the size of the string is always 32 bytes.
    // In other words, the address where the string is located is 32 bytes.
    std::cout << sizeof(name) << " bytes\n";

    std::cout << sizeof(grades) << " bytes\n";

    // compute how many elements are in the array.
    std::cout << sizeof(grades)/sizeof(char) << " elements\n";

    return 0;
}