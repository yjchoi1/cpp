#include <iostream>

int main() {
    // Your code here

    std::string students[] = {"fdsa", "asdf", "fdsff"};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }



    return 0;
}