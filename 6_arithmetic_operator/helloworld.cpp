#include <iostream>

int main(){

    // addition
    {
        int students = 20;
        students = students + 2;
        std::cout << students << std::endl;
        // this is the same as the following
        // students += 2;

        students++;  // this is the same as students = students + 1
        std::cout << students << std::endl;
    }

    // subtract
    { // since cpp does not support multiple same variable declaration in a scope (i.e., main(){}),
      // you need to define another scope with `{}`
        int students = 20;
        students = students - 1;
        students -= 1;
        students--;
        std::cout << students << std::endl;
    }

    // multiplication
    {
        int students = 20;
        students = students * 2;
        students *= 2;
        std::cout << students << std::endl;
    }

    // division
    {
        int students = 20;
        students = students / 2;
        students /= 2;
        std::cout << students << std::endl;
    }

    // modulus operator: returns the remainder 
    {
        int students = 20;
        students = students % 3;
        std::cout << students << std::endl;
    }

    return 0;
}