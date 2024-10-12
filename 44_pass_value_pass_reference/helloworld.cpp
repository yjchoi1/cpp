#include <iostream>

void swap_by_value(std::string x, std::string y);
void swap_by_address(std::string &x, std::string &y);


int main() {
    // Your code here
    std::string x = "coffee";
    std::string y = "water";
    
    // Pass by value
    swap_by_value(x, y);

    // The funciton first works by coping the original variable and conduct the following operation.
    // Accordingly, the original values in main() scope will stay the same, 
    // even though x and y is switched in the function
    // x: coffee
    // y: water

    // print the address of the current x and y in main() scope.
    // You will see the address difference in main() and swap_by_value() scope.
    std::cout << "x and y address in the main() scope" << '\n';
    std::cout << "x:" <<  &x << '\n';
    std::cout << "y:" <<  &y << '\n';

    // pass by address
    // you will see the `x` and `y` in the main() scope is changed.
    swap_by_address(x, y);
    std::cout << "x:" <<  x << '\n';
    std::cout << "y:" <<  y << '\n';

    return 0;
}

// pass by value
void swap_by_value(std::string x, std::string y){
    std::cout << "x and y address in the swap_by_value() scope" << '\n';
    // This will have a different address of x, y than what was defined in main() scope
    std::cout << "x:" <<  &x << '\n';
    std::cout << "y:" <<  &y << '\n';

    std::string temp;
    temp = x;
    x = y;
    y = temp;

    std::cout << "x:" <<  x << '\n';
    std::cout << "y:" <<  y << '\n';
    std::cout << "temp:" <<  x << '\n'; 
}


// pass by address
void swap_by_address(std::string &x, std::string &y){
    std::cout << "x and y address in the swap_by_address() scope" << '\n';
    // This will have the same address of x, y than what was defined in main() scope
    std::cout << "x:" <<  &x << '\n';
    std::cout << "y:" <<  &y << '\n';

    std::string temp;
    temp = x;
    x = y;
    y = temp;

    std::cout << "x:" <<  x << '\n';
    std::cout << "y:" <<  x << '\n';
    std::cout << "temp:" <<  x << '\n'; 
}