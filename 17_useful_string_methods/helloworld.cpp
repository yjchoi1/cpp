#include <iostream>

void length_of_str(){
    // Your code here
    std::string name;

    std::cout << "Enter your name: ";
    // User input might have blank spaces. Use `getline` to accecpt inputs with spaces.
    std::getline(std::cin, name);

    if (name.length() > 5){
        std::cout << "Your name cannot be longer than 5";
    }
    else{
        std::cout << "Welcome" << name;
    }
}

void empty_method(){
    // Your code here
    std::string name;

    std::cout << "Enter your name: ";
    // User input might have blank spaces. Use `getline` to accecpt inputs with spaces.
    std::getline(std::cin, name);

    if (name.empty()){ // return bool
        std::cout << "You did not enter your name";
    }
    else{
        std::cout << "Welcome" << name;
    }
}

void clear_method(){
    // Your code here
    std::string name;

    std::cout << "Enter your name: ";
    // User input might have blank spaces. Use `getline` to accecpt inputs with spaces.
    std::getline(std::cin, name);

    name.clear();
    std::cout << "Your name: " << name;
}


void append_method(){
    // Your code here
    std::string name;

    std::cout << "Enter your name: ";
    // User input might have blank spaces. Use `getline` to accecpt inputs with spaces.
    std::getline(std::cin, name);

    std::cout << "Your name is: " << name << '\n';
    name.append("@gmail.com");

    std::cout << "Your email is: " << name;
}

void at_method(){
    // Your code here
    std::string name;

    std::cout << "Enter your name: ";
    // User input might have blank spaces. Use `getline` to accecpt inputs with spaces.
    std::getline(std::cin, name);

    std::cout << name.at(0);
}


void insert_method(){
    // Your code here
    std::string name;

    std::cout << "Enter your name: ";
    // User input might have blank spaces. Use `getline` to accecpt inputs with spaces.
    std::getline(std::cin, name);

    std::cout << name.insert(0, "@");
}

void find_method(){
    // Your code here
    std::string name;

    std::cout << "Enter your name: ";
    // User input might have blank spaces. Use `getline` to accecpt inputs with spaces.
    std::getline(std::cin, name);

    std::cout << name.find(" ");
}

void earse_method(){
    // Your code here
    std::string name;

    std::cout << "Enter your name: ";
    // User input might have blank spaces. Use `getline` to accecpt inputs with spaces.
    std::getline(std::cin, name);

    std::cout << name.erase(0, 3);
}

int main() {
    length_of_str();
    empty_method();
    clear_method();
    append_method();
    at_method();


    return 0;
}