#include <iostream>

void main1()
{
    // Your code here

    // Syntax
    // std::string cars[3][4];

    // You do need the column size for 2D array, but not neccessarily the row size.
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},         // row 0
                             {"corvette", "equinox", "silverdato"},  // row 1
                             {"chellanger", "durango", "ram 1500"}}; // row 2

    // Access a value
    std::cout << cars[0][1] << "\n";
}

void main2()
{
    // Your code here

    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},         // row 0
                             {"corvette", "equinox", "silverdato"},  // row 1
                             {"chellanger", "durango", "ram 1500"}}; // row 2

    // Loop can be used
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    // The below will return the memory address of each row.
    for(int i = 0; i < rows; i++){
        std::cout << cars[i] << '\n'; 
    }

    // The below will return the values at each element.
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

int main(){

    main1();
    main2();

    return 0;
}

