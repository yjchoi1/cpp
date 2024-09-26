#include <iostream>

// funciton declaration
void bakePizze();
void bakePizze(std::string topping1);

int main() {
    // Your code here
    bakePizze();
    bakePizze("pepperoni");
    return 0;
}


void bakePizze(){
    std::cout << "here is your pizza! \n";
}

// Note:
// function name and parameters ara called function signature
void bakePizze(std::string topping1){
    std::cout << "here is your " << topping1 << " pizza!\n";
}
