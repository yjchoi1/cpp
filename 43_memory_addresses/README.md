### Memory Address in C++ with Examples

In C++, a **memory address** is the unique identifier of a specific location in the computer's memory. Each variable in your program is stored at a distinct memory address. Understanding and manipulating memory addresses gives you fine-grained control over your program, which is a powerful feature of C++.

#### 1. **Pointers**
A **pointer** is a variable that stores the memory address of another variable.

```cpp
int num = 10;
int* ptr = &num; // ptr holds the memory address of num
```

- `ptr` now contains the address of `num`.
- Printing `ptr` will show the memory address, while printing `*ptr` (dereferencing) will show the value stored at that address.

**Output:**
```cpp
std::cout << "Address of num: " << ptr << std::endl; // e.g., 0x7ffee38d08bc
std::cout << "Value at address: " << *ptr << std::endl; // 10
```

#### 2. **Dereferencing**
Dereferencing means accessing the value stored at the memory address a pointer points to.

```cpp
int value = *ptr; // value is now 10, the value stored at the address ptr points to
```

- `*ptr` gives the value stored at the memory address `ptr` points to.

**Output:**
```cpp
std::cout << "Dereferenced value: " << value << std::endl; // 10
```

#### 3. **Null Pointers**
A null pointer doesn't point to any valid memory location. It is represented by `nullptr` in modern C++.

```cpp
int* ptr = nullptr; // ptr points to nothing
```

**Output:**
```cpp
if(ptr == nullptr) {
    std::cout << "ptr is null." << std::endl; // ptr is null.
}
```

#### 4. **Pointer Arithmetic**
Pointers can be incremented or decremented to navigate through contiguous memory locations like arrays.

```cpp
int arr[3] = {1, 2, 3};
int* ptr = arr; // ptr points to the first element of the array

ptr++; // ptr now points to the second element
```

**Output:**
```cpp
std::cout << "Second element: " << *ptr << std::endl; // 2
```

#### 5. **Dynamic Memory Allocation**
Dynamic memory allocation allows you to request memory at runtime using `new` and release it with `delete`.

```cpp
int* ptr = new int; // dynamically allocate memory for an integer
*ptr = 5; // assign value to allocated memory
```

**Output:**
```cpp
std::cout << "Dynamically allocated value: " << *ptr << std::endl; // 5
```

- Always free the allocated memory to prevent memory leaks:

```cpp
delete ptr; // free the memory
```

#### 6. **References vs. Pointers**
A **reference** is an alias for another variable, offering similar functionality to pointers but with simpler syntax.

```cpp
int num = 10;
int& ref = num; // ref is a reference to num
```

- `ref` can be used like `num`, but unlike pointers, references cannot be null and must be initialized when declared.

**Output:**
```cpp
std::cout << "Value via reference: " << ref << std::endl; // 10
ref = 20; // changes num as well
std::cout << "Updated value of num: " << num << std::endl; // 20
```

These examples illustrate the basics of memory addresses, pointers, and references in C++, helping you understand how to manipulate memory effectively in your programs.