#include <iostream>

int main() {
    // Your code here
    for(int i=1; i <= 10; i++){
        std::cout << "Outer loop" << i << '\n';
        for(int j=1; j <= 3; j++){
            std::cout << j << '\n';
    }
    
    }


    return 0;
}