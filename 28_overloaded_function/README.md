### **Function Overloading in C++**

> In cpp, functions can share the same name, but you set a different set of parameters under the same name.


Function overloading is a feature in C++ that allows you to define multiple functions with the same name, but with different parameter lists. The compiler differentiates these functions based on the number and/or types of parameters passed to them. This enables you to create functions that perform similar tasks but with different types or numbers of inputs.

#### **Key Points About Function Overloading:**

1. **Same Function Name, Different Signatures:**
   - The functions must have the same name.
   - They must differ in their parameter list. This difference can be:
     - The number of parameters.
     - The types of parameters.
     - The order of parameters (if they have different types).

2. **Return Type Doesn't Matter:**
   - The return type of the function is not considered when determining which function to call. Function overloading is based purely on the parameters.

3. **Compiler Decides Which Function to Call:**
   - The compiler automatically selects the appropriate function to call based on the arguments you pass.

#### **Example of Function Overloading:**

```cpp
#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    std::cout << "Sum of 2 and 3: " << add(2, 3) << '\n';         // Calls the first function
    std::cout << "Sum of 2, 3, and 4: " << add(2, 3, 4) << '\n';  // Calls the second function
    std::cout << "Sum of 2.5 and 3.5: " << add(2.5, 3.5) << '\n'; // Calls the third function
    
    return 0;
}
```

#### **Explanation:**

- **`add(int a, int b)`**: This function takes two integers as parameters and returns their sum.
- **`add(int a, int b, int c)`**: This function takes three integers and returns their sum. The difference in the number of parameters allows overloading.
- **`add(double a, double b)`**: This function takes two doubles and returns their sum. The difference in parameter types (double vs. int) allows overloading.

#### **How the Compiler Decides:**

- **When you call `add(2, 3)`**, the compiler sees that there is a function `add(int, int)` that matches the types of the arguments you provided, so it calls the first function.
- **When you call `add(2, 3, 4)`**, the compiler finds the function `add(int, int, int)` that matches the three arguments, so it calls the second function.
- **When you call `add(2.5, 3.5)`**, the compiler selects the `add(double, double)` function, because it matches the `double` types of the arguments.

#### **Things to Keep in Mind:**

- **Ambiguity**: If two overloaded functions could match the same call due to implicit type conversions, the compiler will generate an error due to ambiguity. For example:
  ```cpp
  void print(int a);
  void print(double b);
  
  print(5);   // This will call print(int)
  print(5.0); // This will call print(double)
  
  // But if you have a function like:
  void print(float c); 
  print(5.0f); // This might cause ambiguity between print(float) and print(double)
  ```
- **Defaults**: Be careful when using default parameters in overloaded functions, as this can sometimes lead to ambiguous calls.

### **Summary:**
Function overloading in C++ allows you to define multiple functions with the same name but different parameter lists. This makes your code more readable and flexible, allowing functions to handle various types of input without needing separate function names for each type or number of parameters. The compiler chooses the correct function to call based on the arguments provided in each call.