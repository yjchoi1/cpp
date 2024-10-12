#include <iostream>

struct Car {
    std::string model;
    int year;
    std::string color;
};


void printCar_passByValue(Car car);
void printCar_passByReference(Car &car);
void paintCar(Car &car, std::string color);

int main() {
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2022;
    car1.color = "Red";

    car2.model = "Corvette";
    car2.year = 2023;
    car2.color = "Blue";

    std::cout << &car1 << std::endl;
    std::cout << &car2 << std::endl;

    // structs that are passed by value are copied into a new struct.
    // so the original struct is not modified.
    printCar_passByValue(car1);
    printCar_passByValue(car2);

    // structs that are passed by reference are not copied into a new struct.
    // so the original struct is modified.
    printCar_passByReference(car1);
    printCar_passByReference(car2);

    paintCar(car1, "Yellow");
    paintCar(car2, "Green");

    // When passing by reference, the color of the car is changed.
    printCar_passByReference(car1);
    printCar_passByReference(car2);

    // When passing by value, the color of the car is not changed.
    printCar_passByValue(car1);
    printCar_passByValue(car2);

    // the difference between pass by value and pass by reference is that pass by value is a copy of the struct,
    // so the original struct is not modified.
    // pass by reference is not a copy of the struct, so the original struct is modified.

    
    return 0;
}

void printCar_passByValue(Car car) {
    // in pass by value, the address of the struct is different from the original struct.
    // this is because the struct is copied into a new struct.
    std::cout << &car << std::endl;
    std::cout << "Car: " << car.model << std::endl;
    std::cout << "Car: " << car.year << std::endl;
    std::cout << "Car: " << car.color << std::endl;
}

void printCar_passByReference(Car &car) {
    // in pass by reference, the address of the struct is the same as the original struct.
    // this is because the struct is not copied into a new struct.
    std::cout << &car << std::endl;
    std::cout << "Car: " << car.model << std::endl;
    std::cout << "Car: " << car.year << std::endl;
    std::cout << "Car: " << car.color << std::endl;
}

void paintCar(Car &car, std::string color) {
    car.color = color;
}

