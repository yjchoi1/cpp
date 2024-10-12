#include <iostream>

void dynamic_memory_int() {
    // Your code here
    // Dynamic memory:
    // Memory that is allocated after the program is already compiled & running.
    // Use the `new` operator to allocate memory in the heap rather than the stack

    // It is useful when we don't know how much memory we will need.
    // Makes our programs more flexible, especially when accepting new input.

    int *pNum = NULL;

    // Allocate memory in the heap, rather than in stack, use `new` operator
    // pointer pNum is pointing to the memory location where we are going to store int
    pNum = new int; 
    // pNum contains the memory address in the heap that can contain on int

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    // Free the memory 
    delete pNum;

}

void dynamic_memory_array() {
  
    char *pGrades = NULL;
    // dynamic memory allocation is especially useful if we don't know the array size

    int size;
    std::cout << "how many grades to enter in? ";
    std::cin >> size;

    pGrades = new char[size]; 

    for(int i = 0; i <  size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }
    for(int i = 0; i <  size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

}

int main(){
    dynamic_memory_int();
    dynamic_memory_array();

    return 0;
}