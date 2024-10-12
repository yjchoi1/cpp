#include <iostream>

class Animal {
    public:
        bool alive = true;
        double weight = 0;
    
    // When you are designing a class, 
    // first, think of if there should be attributes that should exist for child classes
    // In this example, since every animals can eat, it would be nice to have `eat()`
    // This privents writing `eath()` to all the other child classes when you need to add `eat()` to them
    void eat() {
        std::cout << "This animal is eating.\n";
    }
};

class Cat : public Animal {
    public:
        int cat_paws;
        void meow() {
            std::cout << "Meow.\n";
        }

        Cat(double weight, int cat_paws){
            this->weight = weight;
            this->cat_paws = cat_paws;
        }
};

class Dog : public Animal {
    public:
        void bark() {
            std::cout << "Woof.\n";
        }
};

int main() {
    // inheritance: a class can recieve attributes and methods from another class.
    // The child class inherit from a Parent class.
    // It helps reusing code found within multiple classes.

    Dog dog;
    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    Cat cat(2.3, 4);
    std::cout << cat.alive << '\n';
    std::cout << cat.weight << '\n';
    std::cout << cat.cat_paws << '\n';

    
    return 0;
}
