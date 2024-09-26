#include <iostream>

int main() {
    // Your code here
    std::string foods[5];
    // Note: array is a static variable. The size cannot be changed.

    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "Enter a food you like or 'q' to quite # " << i << ":";
        std::getline(std::cin, temp);  // Getline allows the your input with empty spaces
        if(temp == "q"){
            break; 
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food: \n";

    for (std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}