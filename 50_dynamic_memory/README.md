Dynamic memory in C++ refers to memory that is allocated at runtime (while the program is running) rather than at compile time. It is used when the size of data or the number of objects needed cannot be determined in advance. This type of memory allocation allows for more flexible and efficient use of memory.

### Key Concepts of Dynamic Memory

1. **Heap vs. Stack:**
   - **Stack Memory** is used for static memory allocation, such as local variables and function call management. It has a fixed size and is automatically managed, meaning that memory is automatically allocated and deallocated as functions are called and exited.
   - **Heap Memory** is used for dynamic memory allocation. It is managed by the programmer, and the size can grow or shrink as needed. Memory in the heap remains allocated until explicitly deallocated.

2. **Dynamic Allocation:**
   - In C++, dynamic memory allocation is done using the `new` keyword. It allocates memory on the heap for a variable or an object at runtime.
   - For example:
     ```cpp
     int* ptr = new int; // Allocates memory for a single integer
     int* arr = new int[10]; // Allocates memory for an array of 10 integers
     ```

3. **Dynamic Deallocation:**
   - Memory allocated dynamically must be manually deallocated using the `delete` keyword to avoid memory leaks.
   - For example:
     ```cpp
     delete ptr; // Frees memory allocated for the single integer
     delete[] arr; // Frees memory allocated for the array of integers
     ```

4. **Memory Leaks:**
   - A memory leak occurs when memory that is no longer needed is not properly deallocated. This can cause a program to consume more memory over time, leading to performance issues or crashes.

5. **Advantages of Dynamic Memory:**
   - **Flexibility:** You can allocate memory based on the program's needs at runtime.
   - **Efficiency:** Memory is allocated only when needed, which can lead to more efficient use of resources.

6. **Disadvantages of Dynamic Memory:**
   - **Manual Management:** You need to manually allocate and deallocate memory, which increases the risk of errors such as memory leaks and dangling pointers.
   - **Performance Overhead:** Allocating and deallocating memory on the heap is slower compared to the stack.

### Example Code

```cpp
#include <iostream>
using namespace std;

int main() {
    // Dynamic allocation of a single integer
    int* num = new int(5); // Allocates memory and initializes it to 5

    cout << "Value: " << *num << endl; // Output: Value: 5

    // Dynamic allocation of an array
    int* arr = new int[5]; // Allocates memory for an array of 5 integers

    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    cout << "Array values: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " "; // Output: Array values: 0 10 20 30 40
    }
    cout << endl;

    // Deallocate memory
    delete num; // Frees memory for single integer
    delete[] arr; // Frees memory for array

    return 0;
}
```

In this example, `new` is used to allocate memory dynamically, and `delete` is used to free it. The program allocates memory for a single integer and an array, then deallocates them to prevent memory leaks.