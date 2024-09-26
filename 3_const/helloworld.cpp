#include <iostream>

int main(){

    // In this tutorial, we want to make a variable read only.
    // In the following example, we want to fix pi, so that even if someone change the variable pi to 5.4, 
    // it won't change from the original value that is predefined.
    // This is what `const` do

    const double PI = 3.14159; //the convention for const is UPPERCASE

    // try change
    // PI = 420.1;  // this will show you an error sicne you try to modify read only variable, const

    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}

