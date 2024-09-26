#include <iostream>

std::string concatStrings(std::string string1, std::string string2);

int main() {
    // Your code here
    std::string firstname = "bro";
    std::string lastname = "code";
    std::string fullname = concatStrings(firstname, lastname);
    std::cout << "Hello" << fullname;


    return 0;
}

std::string concatStrings(std::string string1, std::string string2){
    std::string result = string1 + string2;
    return result;
}



