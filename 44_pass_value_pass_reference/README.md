In C++, "pass by value" and "pass by address" are two different ways of passing arguments to functions, and they determine how changes to the function parameters affect the original variables.

### 1. **Pass by Value**
When you pass an argument **by value**, a copy of the actual parameter's value is made and passed to the function. This means the function works with the copy, and any modifications to this copy do not affect the original variable.

**Example:**

```cpp
#include <iostream>

void modifyValue(int x) {
    x = 20; // Modifies the copy, not the original
}

int main() {
    int num = 10;
    modifyValue(num); // Pass by value
    std::cout << "Value after modifyValue: " << num << std::endl; // Output: 10
    return 0;
}
```

**Explanation:**
- `num` is passed to `modifyValue(int x)`. Inside the function, `x` is a copy of `num`.
- Changing `x` to 20 inside the function does not affect `num` in `main()` because they are separate variables.

**Output:**
```
Value after modifyValue: 10
```

### 2. **Pass by Address**
When you pass an argument **by address** (using pointers), the function receives the memory address of the original variable. This allows the function to modify the original variable directly.

**Example:**

```cpp
#include <iostream>

void modifyAddress(int* x) {
    *x = 20; // Modifies the original variable through the pointer
}

int main() {
    int num = 10;
    modifyAddress(&num); // Pass by address (pointer to num)
    std::cout << "Value after modifyAddress: " << num << std::endl; // Output: 20
    return 0;
}
```

**Explanation:**
- `num` is passed to `modifyAddress(int* x)` as an address using the address-of operator `&`.
- Inside `modifyAddress`, `x` is a pointer to `num`. The statement `*x = 20;` changes the value at the address `x` points to, which is the original `num`.

**Output:**
```
Value after modifyAddress: 20
```

### Comparison of Pass by Value vs Pass by Address:

1. **Memory Usage:**
   - **Pass by Value:** Creates a copy of the variable. More memory is used for large objects or structures.
   - **Pass by Address:** Only the memory address is passed. Efficient for large data structures.

2. **Safety:**
   - **Pass by Value:** Changes inside the function do not affect the original variable, providing safety against unintended modifications.
   - **Pass by Address:** Changes in the function directly affect the original variable, which can be dangerous if not handled carefully.

3. **Performance:**
   - **Pass by Value:** Slower for large objects due to the overhead of copying.
   - **Pass by Address:** Faster for large objects as only the address is copied.

### Use Cases:
- **Pass by Value:** Use when you do not want the function to modify the original data or when the data being passed is small (e.g., basic data types).
- **Pass by Address:** Use when you want the function to modify the original data or when passing large objects where copying would be expensive.

These two methods allow you to control how data is manipulated within functions, giving you the flexibility to write efficient and safe code in C++.