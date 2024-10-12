#include <iostream>

void walk_iterative(int steps);
void walk_recursive(int steps);

int main() {
    // 
    walk_iterative(100);
    walk_recursive(100);


    return 0;
}

void walk_iterative(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step" << '\n';
    }
};

void walk_recursive(int steps){
    if(steps > 0){
        std::cout << "You take a step" << '\n';
        // invoke the function within the funciton. 
        walk_recursive(steps - 1);
    }
};