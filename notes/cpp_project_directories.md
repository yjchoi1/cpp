In a C++ project, the directory structure and file types are organized to separate the different aspects of the code for better maintainability and readability. Here’s a detailed explanation of the purpose of different folders and the differences between file types:

### Folder Structure: `src` and `include`
1. **`src` (Source Files)**:
   - This folder typically contains the implementation of the core logic of the project.
   - Files in this directory are usually C++ source files with the extension `.cc` (or `.cpp`).
   - These files include the actual definitions of functions and classes declared in the header files.

2. **`include` (Header Files)**
   - This folder contains the header files that declare the interfaces, classes, and function prototypes.
   - Header files usually have the extension `.h` or `.hpp`.
   - These files are meant to be included (`#include`) in the source files to provide the necessary declarations for the compiler.
   - This separation allows different source files to use the same declarations without needing to redefine them.

### Differences Between `.h`, `.tcc`, and `.cc` Files

1. **`.h` Files (Header Files)**
   - Header files contain declarations of functions, classes, variables, and constants.
   - They define the structure or interface that other parts of the code can use, without revealing the implementation details.
   - Example contents of a header file might include:
     ```cpp
     // particle.h
     #ifndef PARTICLE_H
     #define PARTICLE_H

     class Particle {
     public:
         void update_position();
     private:
         double mass;
     };

     #endif
     ```
   - Header files are often included in multiple source files to provide the necessary declarations.

2. **`.cc` Files (C++ Source Files)**
   - These are the main implementation files where the actual logic of functions and classes is defined.
   - They include the definitions of the functions and methods declared in the corresponding header files.
   - Example contents of a source file might include:
     ```cpp
     // particle.cc
     #include "particle.h"

     void Particle::update_position() {
         // Implementation of the method
     }
     ```
   - The `#include "particle.h"` statement brings in the declarations so that the compiler knows the structure of the class or functions being defined.

3. **`.tcc` Files (Template Implementation Files)**
   - These files are used to provide implementations of template classes or functions that are defined in header files.
   - Templates in C++ must have their implementation in the same file as their declaration or included in the same translation unit because the compiler needs to see the entire template definition to generate code for each instantiation.
   - Typically, the template class is declared in a `.h` file, and the implementation is put in a corresponding `.tcc` file, which is then included at the end of the `.h` file.
   - Example usage:
     ```cpp
     // particle.h
     #ifndef PARTICLE_H
     #define PARTICLE_H

     template <typename T>
     class Particle {
     public:
         void update_position();
     private:
         T mass;
     };

     #include "particle.tcc"
     #endif

     // particle.tcc
     template <typename T>
     void Particle<T>::update_position() {
         // Implementation using template parameter T
     }
     ```
   - This structure helps in keeping the template implementation separate from the declaration while still making it available to the compiler as needed.

### Why This Separation?
- **Code Organization**: By separating declarations (`.h`) and implementations (`.cc`), the code is better organized and more modular. This makes it easier to navigate and understand.
- **Compilation Efficiency**: Header files allow the compiler to compile different source files independently. If only the implementation (`.cc`) changes, the files including the header need not be recompiled.
- **Template Handling**: Templates require a slightly different handling because the compiler needs the entire code to generate the appropriate function or class instantiation. This is why `.tcc` files are used to include the implementation at the end of the header file.

### Practical Tips
- When starting with a new C++ project:
  - **Look at the `include` folder** to understand the project’s structure and the available classes and functions.
  - **Look at the `src` folder** to see how these classes and functions are implemented.
- For templates, remember that their implementation must be visible to the compiler whenever they are used, hence the `.tcc` pattern.

This structure helps maintain clean, manageable, and scalable C++ code, which is crucial for large projects like MPM simulations.