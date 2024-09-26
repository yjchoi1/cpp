# include <iostream>
# include <vector>


using text_t = std::string;
using number_t = int;

int main(){

    text_t firstname = "bro";
    number_t age = 21;

    std::cout << firstname << '\n' << age;
    
    return 0;

}

// Note
// typedef is replaced by `using`