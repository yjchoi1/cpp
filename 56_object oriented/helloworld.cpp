#include <iostream>


// Object: An instance of a class.
// It contains a collection of attributes and methods.
// Class defines a blueprint for an object.

class Human{
    public:
        std::string name;  // We can assing a default value if you want
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }

        void drink(){
            std::cout << "This person is drinking";
        }
};

int main() {

    Human human1;

    human1.name = "Rick";
    human1.occupation = "teacher";
    human1.age = 70;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    

    return 0;
}
