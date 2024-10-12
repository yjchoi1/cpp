# Constructor overloading

In C++, **constructor overloading** is a concept where a class can have multiple constructors with different parameters. It allows creating objects of the same class in different ways by providing different sets of arguments.

### Key Points About Constructor Overloading:

1. **Multiple Constructors with Different Signatures:** 
   - In C++, you can define multiple constructors for a class as long as they have different parameter lists (number of parameters, types of parameters, or the order of parameters). This is known as "overloading" the constructor.

2. **Purpose of Constructor Overloading:**
   - It allows you to initialize objects in different ways. For example, you might want to create an object with default values, with specific values, or even with a copy of another object.

3. **Example Scenario:** 
   - Suppose you have a `Rectangle` class, and you want to create objects with:
     - No parameters (a default rectangle)
     - Specified width and height
     - A square (where width equals height)
   
   You can create three overloaded constructors for these scenarios.

### Example Code in C++

Here’s an example demonstrating constructor overloading with a `Rectangle` class:

```cpp
#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    // Default constructor (no parameters)
    Rectangle() {
        width = 0;
        height = 0;
    }

    // Constructor with two parameters
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Constructor with one parameter (square)
    Rectangle(int side) {
        width = side;
        height = side;
    }

    // Method to display the dimensions
    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    // Creating different objects using overloaded constructors
    Rectangle rect1;           // Calls the default constructor
    Rectangle rect2(10, 20);   // Calls the two-parameter constructor
    Rectangle rect3(15);       // Calls the one-parameter constructor

    // Displaying the dimensions
    rect1.display(); // Output: Width: 0, Height: 0
    rect2.display(); // Output: Width: 10, Height: 20
    rect3.display(); // Output: Width: 15, Height: 15

    return 0;
}
```

### Explanation:

1. **`Rectangle()` (Default Constructor):**
   - Initializes the `width` and `height` to 0.
   
2. **`Rectangle(int w, int h)` (Two-Parameter Constructor):**
   - Initializes the rectangle with specified `width` and `height`.
   
3. **`Rectangle(int side)` (One-Parameter Constructor):**
   - Initializes the rectangle as a square with both `width` and `height` set to the same value.

### Why is it Different from Python?

- In Python, you typically use the `__init__` method as the constructor, and you don't overload constructors in the same way. Instead, you would use default values or conditional logic within the `__init__` method to achieve similar functionality.
  
- C++ allows multiple constructors directly, providing more flexibility in how objects are initialized.

# What if the overloaded constructors has ambiguous arguments between them?

In C++, when you create an instance of a class with multiple overloaded constructors, the choice of which constructor is called is determined by the arguments you provide when creating the object. The compiler automatically distinguishes which constructor to use based on the **number**, **types**, and **order** of the arguments you pass.

### How the Compiler Chooses the Constructor:

1. **Number of Parameters:** The compiler matches the number of arguments provided in the constructor call to the corresponding constructor definition.
2. **Type of Parameters:** If multiple constructors have the same number of parameters, the compiler will match the argument types to the constructor parameters.
3. **Order of Parameters:** If the parameter types are different, the order in which they appear will also determine which constructor is used.

### Example: Distinguishing Between Constructors

Let’s revisit the `Rectangle` class example to illustrate how the compiler distinguishes between different constructors.

```cpp
#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    // Default constructor
    Rectangle() {
        width = 0;
        height = 0;
    }

    // Constructor with two integer parameters
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Constructor with one integer parameter (for a square)
    Rectangle(int side) {
        width = side;
        height = side;
    }

    // Constructor with two parameters of different types (double and int)
    Rectangle(double w, int h) {
        width = static_cast<int>(w);
        height = h;
    }

    // Method to display the dimensions
    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    // Different ways to create Rectangle instances, demonstrating constructor overloading
    Rectangle rect1;           // Calls the default constructor
    Rectangle rect2(10, 20);   // Calls the constructor with two integer parameters
    Rectangle rect3(15);       // Calls the constructor with one integer parameter
    Rectangle rect4(10.5, 20); // Calls the constructor with double and int parameters

    // Displaying the dimensions of each rectangle
    rect1.display(); // Output: Width: 0, Height: 0
    rect2.display(); // Output: Width: 10, Height: 20
    rect3.display(); // Output: Width: 15, Height: 15
    rect4.display(); // Output: Width: 10, Height: 20

    return 0;
}
```

### Explanation:

1. **`Rectangle rect1;`** – Calls the **default constructor** `Rectangle()`, which has no parameters.
2. **`Rectangle rect2(10, 20);`** – Calls the **two-parameter constructor** `Rectangle(int w, int h)` because you provide two integer arguments.
3. **`Rectangle rect3(15);`** – Calls the **single-parameter constructor** `Rectangle(int side)` because you provide one integer argument.
4. **`Rectangle rect4(10.5, 20);`** – Calls the **constructor with a `double` and an `int`** because the first argument is a `double` (10.5) and the second is an integer (20).

### What Happens If There Is Ambiguity?

If there is ambiguity in choosing the constructor (e.g., the compiler cannot determine which constructor matches the arguments due to similar types or conversion possibilities), you will get a **compiler error**. To resolve this, you may need to be more specific with the arguments (like using type casting) or adjust the constructor definitions.

### Summary

The compiler determines which constructor to call based on the arguments you pass when creating the object. It matches the number of parameters, their types, and their order to the appropriate overloaded constructor. If no exact match is found or if there is ambiguity, a compilation error will occur.