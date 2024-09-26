# `main()` function and typical function

In C++ (and in C), the `main` function has a special role as the entry point of a program. Here's why its type is `int` and why it typically returns `0`, compared to other functions that might have a `void` return type:

### **1. The `main` Function and Its Return Type (`int`)**
- **Entry Point**: The `main` function is the starting point of any C++ program. When the program is executed, control is transferred to the `main` function, which is responsible for running the program's code.
- **Return Type (`int`)**: The return type of `main` is `int`, which means that `main` must return an integer value. This integer value serves as a status code that is returned to the operating system (OS) when the program finishes executing.
  - **Return Value Significance**: By convention, returning `0` indicates that the program has executed successfully without errors. Any non-zero value typically indicates that some kind of error or abnormal termination occurred. This allows the OS or other programs to detect if the execution was successful.
  
- **Why `int` and Not `void`?**: The use of `int` allows the program to communicate back to the OS. If `main` were `void`, there would be no way to return a status code to the OS, which is often important in multi-program systems or batch processing environments where the success or failure of a program needs to be detected.

### **2. Why Return `0`?**
- **Indicates Success**: In C++, returning `0` from `main` typically signifies that the program completed successfully. It's a convention that's understood by the OS.
- **Automatic Return**: In C++ (unlike C), if the `main` function does not explicitly return a value, the compiler automatically assumes a `return 0;` at the end of the `main` function. This means that even if you omit the return statement, the program will still return `0` to the OS by default.

### **3. Typical Functions with `void` Return Type**
- **Void Functions**: A function with a `void` return type is one that does not return a value. These functions perform an action but do not produce a result that needs to be communicated back to the caller.
- **Why No Return Value?**: These functions are typically used for procedures where the primary purpose is to perform side effects (e.g., printing to the console, modifying variables, etc.) rather than to compute a result.
- **No Need to Return `0`**: Since `void` functions do not return a value, they do not need to return `0` or any other value. The concept of a return status is unnecessary because these functions are not communicating a success or failure status to the caller.

### **Summary**
- **`main` Function**: Returns an `int` to indicate the status of the program to the OS. Returning `0` signifies successful execution.
- **`void` Functions**: Do not return a value since they are not required to communicate a success or failure status. They are used when no value needs to be returned to the caller.

The `int` return type of `main` is essential for interacting with the OS, while other functions might use `void` when no return value is needed, reflecting their different roles within a program.


# Function definition & funciton declaration
You can change the name of the parameter `name_of_brithday` in the function declaration `void happyBirthday(std::string name_of_brithday, int age);` to any other valid identifier without affecting the function definition or the rest of your program.

Here's why:

### **1. Function Declaration vs. Function Definition**
- **Function Declaration**: This is where you inform the compiler about the function's name, return type, and the types of its parameters. The names of the parameters in the declaration are optional and only used for clarity. The compiler mainly needs to know the types of the parameters and the return type of the function.
  
  ```cpp
  void happyBirthday(std::string, int);  // Parameter names can be omitted
  void happyBirthday(std::string someName, int someAge);  // Or named differently
  ```

- **Function Definition**: This is where you actually define the function and write the code that will be executed when the function is called. In the function definition, the parameter names are necessary because they refer to the actual arguments that will be used inside the function.

  ```cpp
  void happyBirthday(std::string name_of_brithday, int age) {
      std::cout << "Happy birthday to " << name_of_brithday << '\n';
      std::cout << "You are " << age << " years old" << '\n';
  }
  ```

### **2. Changing the Parameter Name in the Declaration**
You can change the name `name_of_brithday` to something else in the function declaration, and it won't affect the function's behavior as long as you maintain the correct order and types of the parameters. Here's an example:

```cpp
void happyBirthday(std::string birthdayName, int yearsOld);
```

This is perfectly valid, and you can still define the function as:

```cpp
void happyBirthday(std::string name_of_brithday, int age) {
    std::cout << "Happy birthday to " << name_of_brithday << '\n';
    std::cout << "You are " << age << " years old" << '\n';
}
```

### **Summary**
- **Parameter Names in Declarations**: Optional and can be changed to any valid identifier or even omitted.
- **Parameter Names in Definitions**: Necessary and should match the identifiers used in the function's implementation.

The key point is that the names of the parameters in the function declaration are primarily for readability and documentation purposes. They do not need to match the names used in the function definition.