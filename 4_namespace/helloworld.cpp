# include <iostream>


// int main(){

//     int x = 0;
//     int x = 1; // this variable decration with the same name will cause error
// }


// To declare and isolate variables, use namespace.


namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}


// function-1: first method to use namesapce
void main1(){
    std::cout << "first method" << '\n';
    
    int x = 0;
    std::cout << x << '\n';  // it will use `x` in here
    std::cout << x << first::x << second::x << '\n';

    // Note: `::` is called `slope resolution operator`
}


// function-2: another way to use namespace
void main2(){
    std::cout << "Second method" << '\n';

    using namespace first;
    std::cout << x << '\n';  // it will use `x` in first namespace
}

// Example of using namespace
void main3(){
    std::cout << "3rd method" << '\n';
    using namespace std;

    // if you add the above line, you don't need to type `std::` before `string`
    string name = "Bro";
    cout << "Hello" << name << '\n';

    // Note:
    // namespace of std has a hundrereds of different entities
    // try
    // `std::` and `tap`

    // So, there will be high likelyhood that some of the variable names in main
    // will overlap with the variable name in `std`

    // Instead, try the following for safer namespace usage
}

void main4(){
    std::cout << "4th method" << '\n';
    using std::cout;
    using std::string;

    string name = "Bro";
    cout << "Hello" << name << '\n';

}

//


int main(){
    main1();
    main2();
    main3();
    main4();
    return 0;
}
