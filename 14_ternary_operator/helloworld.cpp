#include <iostream>

int main(){
    
    // It is a shorthand of if-else statement.
    // condition ? expression1 : expression 2 

    int grade = 75;
    bool hungry = true;

    (grade >= 60) ? std::cout << "you pass!" : std::cout <<"You fail";

    // you can omit `()` for the condition part. 
    // grade >= 60 ? std::cout << "you pass!" : std::cout <<"You fail";

    hungry ? std::cout << "You are hungry" : std::cout << "You are not hungry";

    // you can use in the middle of the code
    std::cout << (hungry ? "You are hungry" : "you are full");
    
    return 0;
}