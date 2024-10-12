#include <iostream>

class Student{
    public:
        // object attributes
        std::string name;
        int age;
        double gpa;

        // Constructor
        // When you create a new object, the constructor is called automatically.
        // The passed values when you create the object are passed to the constructor.
        Student(std::string name_arg, int age_arg, double gpa_arg){
            // To assign values to the object attributes, we use the 'this' keyword.
            this->name = name_arg; // this->name is the attribute and name_arg is the parameter.
            this->age = age_arg;
            this->gpa = gpa_arg;

            // Note: The 'this' keyword is used to refer to the current object.
            // If you don't use the 'this' keyword, the compiler will not know which attribute you are referring to.
            // However, if you use the same name for the parameter and the attribute, you can omit the 'this' keyword.
            // name = name_arg; 
            // age = age_arg;
            // gpa = gpa_arg;
        }
};


int main() {
    // Your code here
    // Constructors: A special method in a class that is called when an object is instantiated.
    // It can be used to set initial values for object attributes.

    Student student1("John", 20, 3.5);
    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    std::cout << student1.gpa << std::endl;
    
    return 0;
}