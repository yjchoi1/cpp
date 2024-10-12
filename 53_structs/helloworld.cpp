#include <iostream>

int main() {
    // strcts: a A structure that groups variables of different data types under a single name.
    // It can contain different data types of functions and variables.
    // Variables are called members.
    // Members can be accessed using the dot operator.
    // The difference between structs and array is that structs can hold different data types.

    struct Student {
        std::string name;
        double gpa;
        bool enrolled = true; // we can set a default value for the member variable.
    };

    // Create a new student
    Student student1;
    student1.name = "John Doe";
    student1.gpa = 3.5;
    student1.enrolled = true;

    // Create another student
    Student student2;
    student2.name = "yongjin";
    student2.gpa = 3.9;
    student2.enrolled = false;

    std::cout << "Student 1: " << student1.name << std::endl;
    std::cout << "Student 1 GPA: " << student1.gpa << std::endl;
    std::cout << "Student 1 Enrolled: " << student1.enrolled << std::endl;

    std::cout << "Student 2: " << student2.name << std::endl;
    std::cout << "Student 2 GPA: " << student2.gpa << std::endl;
    std::cout << "Student 2 Enrolled: " << student2.enrolled << std::endl;
    

    return 0;
}