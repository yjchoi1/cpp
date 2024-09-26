#include <iostream>

int main() {

    // decration and assigment
    int x; //declaration
    x = 5; //assignment

    // int
    int y = 6; //declaration and assignment together
    int sum = x+y;
    int days = 7.5; // the output will be rounded
    int age = 34;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << days << '\n';

    //double (number including decimal)
    double price = 10.99;
    std::cout << price << '\n';

    // char: stores in a single character
    char grade = 'A';
    std::cout << grade << '\n';
    // error in char when have two chars
    // char grade = 'AB'; // --> this will make compiler error

    // boolean
    bool student = true;
    bool teacher = false;

    // string (objects that represent more than one chars (a sequence of text))
    std::string name = "Bro\n";
    std::string address = "1390 atlanta st.\n";
    std::cout << "Hello\n" << name << address << '\n';
    std::cout << "You are " << age << " years old";


    return 0;
}