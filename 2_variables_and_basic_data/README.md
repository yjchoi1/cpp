# Introduction to Stream Insertion and Extraction in C++
In C++, input and output operations are commonly performed using streams. Streams are sequences of characters flowing either into a program (input) or out of a program (output). The two most common types of streams you'll work with are cin (for input) and cout (for output). These streams are part of the C++ Standard Library and are defined in the <iostream> header.

## Stream Insertion (`<<` Operator)
The stream insertion operator << is used to send data to an output stream. Most often, you'll see it used with cout to display data on the console.

Example:

```cpp
#include <iostream>

int main() {
    int num = 10;
    std::cout << "The value of num is: " << num << std::endl;
    return 0;
}
```

Explanation:

std::cout is the standard output stream.
"The value of num is: " is a string literal.
num is an integer variable.
`<<` inserts each of these into the output stream.
`std::endl` is used to insert a newline character and flush the stream.
Output:

```
The value of num is: 10
```

## Stream Extraction (>> Operator)
The stream extraction operator >> is used to extract data from an input stream. You'll frequently use it with cin to read data from the keyboard.

Example:

```cpp
Copy code
#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "You entered: " << num << std::endl;
    return 0;
}
```
Explanation:

`std::cin` is the standard input stream.
`>>` extracts the input and stores it in the variable num.
The value of num is then displayed using cout.

Input:

```
42
```

Output:

```
You entered: 42
```

Summary
Stream Insertion (`<<`): Used to output data to a stream, like cout.
Stream Extraction (`>>`): Used to input data from a stream, like cin.
These operators make it easy to handle basic input and output in C++. By chaining these operators, you can combine multiple inputs and outputs in a single line of code, enhancing the readability and efficiency of your programs.