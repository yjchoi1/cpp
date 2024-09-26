# Introduction

In C++, the "for each" loop, also known as the range-based for loop, is used to iterate over elements in a container, such as arrays, vectors, or other collections, in a simple and readable way. It eliminates the need for explicit indexing or iterators, making the code cleaner and less error-prone.

### Basic Idea
Instead of using a regular `for` loop with an index like this:

```cpp
int numbers[] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    std::cout << numbers[i] << " ";
}
```

You can use a "for each" loop to make it simpler:

```cpp
for (int num : numbers) {
    std::cout << num << " ";
}
```

### How It Works
- **`int num`**: This is a temporary variable that holds each value from the collection, one at a time.
- **`numbers`**: This is the collection you're going through.

# Examples

### Example-basic
Imagine you have a list of numbers and want to print them all:

```cpp
#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    
    // Using a for each loop to print each number
    for (int num : numbers) {
        std::cout << num << " "; // Prints: 1 2 3 4 5
    }

    return 0;
}
```

### Example-vector

**Syntax**
```cpp
for (auto &element : container) {
    // Use element here
}
```

**Key Points**:
1. **`auto &element`**: The `element` variable represents each item in the container. Using `auto` lets the compiler deduce the type automatically. Adding `&` allows modification of the container elements.
2. **`container`**: This is the collection you want to iterate over, like an array, vector, list, etc.
3. **Read-Only Loop**: If you don't need to modify elements, you can use `auto element` without `&`.
4. **Common Use Cases**:
   - Iterating over arrays or vectors.
   - Accessing elements without modifying them.
   - Modifying elements directly if `&` is used.

**Example**
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Range-based for loop
    for (auto &num : numbers) {
        num *= 2; // Modify each element
    }

    // Print modified elements
    for (const auto &num : numbers) {
        std::cout << num << " "; // Output: 2 4 6 8 10
    }

    return 0;
}
```

This code demonstrates iterating over a vector of integers, doubling each value, and then printing the modified elements.