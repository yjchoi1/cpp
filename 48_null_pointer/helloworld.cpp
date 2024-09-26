#include <iostream>

int main() {
    // Null pointer (nullptr): pointer that is not pointing anything. 

    int *pointer = nullptr;
    int x = 123;

    pointer = &x; 

    if(pointer == nullptr){
        std::cout << "null pointer. No address assigned\n";
        // Don't dereference null pointer. 
        // std::cout << *pointer;
    }
    else{
        std::cout << "address was assigned";
    }

    return 0;
}