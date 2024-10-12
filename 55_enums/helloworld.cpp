#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};
// Note: if you don't assign a value to the enum, it will start from 0 and increment by 1.

int main() {
    // enums: a user-defined type that consists of a set of named integer values.
    // enums are used to assign names to integer constants, making the code more readable and maintainable.
    // It is useful when you have set of potential options.


    // Normally you can't use strings with switch statements.

    // std::string today = "sunday";

    // switch (today) {
    //     case "sunday":  std::cout << "sunday";
    //         std::cout << "sunday";
    //         break;
    //     case "monday":  std::cout << "monday";
    //         std::cout << "monday";
    //         break;
    //     case "tuesday":  std::cout << "tuesday";
    //         std::cout << "tuesday";
    //         break;
    //     case "wednesday":  std::cout << "wednesday";
    //         std::cout << "wednesday";
    //         break;
    //     case "thursday":  std::cout << "thursday";
    //         std::cout << "thursday";
    //         break;
    // }
    // return 0;


    // However, you can use enums with switch statements.
    // Let me show you an example.

    Day today = sunday;

    switch (today) {
        case sunday:  std::cout << "sunday";
            break;
        case monday:  std::cout << "monday";
            break;
    }

    // or you can use the enum values directly.
    switch (today) {
        case 0:  std::cout << "sunday";
            break;
        case 1:  std::cout << "monday";
            break;
    }
    
}