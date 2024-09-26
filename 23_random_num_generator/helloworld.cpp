#include <iostream>

int main() {
    // Your code here
    // srand(0);
    srand(time(NULL));

    int num = (rand() % 6) + 1;

    std::cout << num;
    return 0;
}