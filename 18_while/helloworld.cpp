#include <iostream>

int main() {
    // Your code here
    std::string name;

    // While true, repeat again. 
    // In this case, it will take the input until empty is true.
    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

    return 0;
}