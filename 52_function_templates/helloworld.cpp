#include <iostream>

template <typename T, typename U>

// auto let compiler deduce what type should be.
// If you want the type to be `T` or `U`, you can change auto to T or U.
// However, the return type will be restricted to T or U.
auto max(T x, U y){
    return (x > y) ? x : y; // if x > y, return x; else, y.
}

int main() {
    // Your code here

    // The function `max` can take any data type.
    std::cout << max(1, 2.1) << '\n';
    
    // However, it will return error when types are mixed within argument.
    // std::cout << max(1, 2.2) << '\n';

    // In order to take different data types in the same function, 
    // you need to add another template

    return 0;
}