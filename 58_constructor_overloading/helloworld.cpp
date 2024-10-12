#include <iostream>


class Pizza {
    public:
        std::string topping1;
        std::string topping2;
        std::string topping3;
    
    // constructor overloading
    Pizza(std::string topping1) {
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2, std::string topping3) {
        this->topping1 = topping1;
        this->topping2 = topping2;
        this->topping3 = topping3;
    }

    Pizza() {
        std::cout << "Default constructor called. All toppings are set to 'none'.\n";
    }
};

int main() {
    // overloading constructor: multiple constructors with the same name but different parameters.
    // This allows for varing arguments when instantiating an object.

    Pizza pizza1;
    Pizza pizza2("pepperoni");
    Pizza pizza3("mushroom", "cheese", "pineapple");

    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza3.topping1 << '\n';
    std::cout << pizza3.topping2 << '\n';
    std::cout << pizza3.topping3 << '\n';
    return 0;
}