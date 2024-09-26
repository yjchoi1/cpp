#include <iostream>

double square(double length);
double volume(double length);

int main() {
    // Your code here
    double length = 0.5;
    double area = square(length);
    double vol = volume(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << vol << " cm^3\n";  

    return 0;
}

double square(double length){
    double result = length * length;
    return result;
}

double volume(double length){
    double result = length * length* length;
    return result;
}
