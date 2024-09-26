# Namespace introduction

Namespaces in C++ are a feature designed to organize code into logical groups and prevent name conflicts. When writing large programs or using libraries, different parts of the code may define functions, classes, or variables with the same names. Without namespaces, these could clash, leading to errors.

### Key Concepts:

- **Namespace Declaration**: A namespace is declared using the `namespace` keyword followed by a name and a block of code:
  ```cpp
  namespace MyNamespace {
      int myVariable;
      void myFunction() {
          // code here
      }
  }
  ```

- **Using a Namespace**: To access the members (variables, functions, etc.) of a namespace, you can either use the scope resolution operator `::`:
  ```cpp
  MyNamespace::myFunction();
  ```

  Or you can bring the namespace into the current scope with the `using` directive:
  ```cpp
  using namespace MyNamespace;
  myFunction();
  ```

- **Nested Namespaces**: Namespaces can be nested inside each other:
  ```cpp
  namespace Outer {
      namespace Inner {
          void innerFunction() {
              // code here
          }
      }
  }
  ```

  You can access members of nested namespaces with multiple scope resolution operators:
  ```cpp
  Outer::Inner::innerFunction();
  ```

### Benefits of Namespaces:

1. **Avoid Name Collisions**: By wrapping your code in a namespace, you reduce the risk of conflicts between identifiers (such as functions or variables) with the same names in different libraries or parts of a program.

2. **Organize Code**: Namespaces help group related functions, classes, and variables, making your code more modular and easier to understand.

### Example:
```cpp
#include <iostream>

namespace MathUtils {
    int add(int a, int b) {
        return a + b;
    }
}

int main() {
    int result = MathUtils::add(3, 4);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
```
In this example, the `add` function is defined inside the `MathUtils` namespace, so it doesn't interfere with other `add` functions that might exist elsewhere in the code or in libraries.

In summary, namespaces in C++ are a powerful tool to keep your code organized and avoid name conflicts, making them an essential feature for both small and large projects.