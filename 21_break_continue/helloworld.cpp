#include <iostream>

void break_(){
    // Your code here
    for(int i = 0; i <= 20; i++){
        if(i == 13){
            break;
        }
        std::cout << i << '\n';
    }
}


void continue_(){
    // Your code here
    for(int i = 0; i <= 20; i++){
        // when `i` reaches `13`, don't go to next line, but go to next iteration, `i=14`.
        // In this code, this will make the code to skip `std::cout` line. 
        if(i == 13){ 
            continue;
        }
        std::cout << i << '\n';
    }
}


int main() {
    break_();
    continue_;

    return 0;
}