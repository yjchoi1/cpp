#include <iostream>

// if you would like to use a funciton that is defined after the `main` funciton, 
// you first need to initiate as follows.
// This is called function declaration
// You can change name `name_of_brithday` to any other name. It won't affect the result.
// However, you must declare the type. 
void happyBirthday(std::string name_of_brithday, int age);

int main() {
    // Your code here
    std::string name  = "Bro";
    int age = 21;

    happyBirthday(name, age);

    return 0;
}


// Function definition
void happyBirthday(std::string name_of_brithday, int age){
    std::cout << "happy birthday to " << name_of_brithday << '\n';
    std::cout << "Your are " << age << " years ole" << '\n';
}
