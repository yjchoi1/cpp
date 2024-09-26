#include <iostream>


void printInfo_normal_param(std::string name, int age);
void printInfo_const_param(const std::string name, const int age);

int main() {
    // Const parameter: parameter that is effectively read-only.
    // Coude ismore secure & conveys intent useful for references and pointers.
    //

    std::string name = "choi";
    int age = 21;

    printInfo_normal_param(name, age);
    printInfo_const_param(name, age);


    return 0;
}

void printInfo_normal_param(std::string name, int age){
    std::cout << name << '\n';
    std::cout << age << '\n';
}

void printInfo_const_param(const std::string name, const int age){

    // Trying to modify the cont param as follows will cause an error. 
    // name = " ";
    // age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}