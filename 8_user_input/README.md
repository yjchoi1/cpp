# User inputs

User input in C++ refers to the process of allowing the user to provide data to the program during its execution. This is commonly done using the `cin` object from the standard input stream (`std::cin`), which reads data from the keyboard.

### Basic Usage of `std::cin`:

- **Reading a Single Value:**
  ```cpp
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;
  std::cout << "You entered: " << age << std::endl;
  ```
  - Here, `std::cin >> age;` waits for the user to input a value and then stores it in the `age` variable.

- **Reading Multiple Values:**
  ```cpp
  int x, y;
  std::cout << "Enter two numbers: ";
  std::cin >> x >> y;
  std::cout << "You entered: " << x << " and " << y << std::endl;
  ```
  - You can read multiple inputs at once by chaining `>>`.

- **Reading Strings:**
  ```cpp
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Hello, " << name << std::endl;
  ```
  - `std::cin` reads a word (up to the first space) into the `name` string. To read an entire line, you would use `std::getline(std::cin, name);`.

### Important Notes:

- **Input Type:** The type of the variable must match the type of data the user enters. If a mismatch occurs (like entering a letter when an integer is expected), `std::cin` may enter a fail state, and further input operations might not work until the error is cleared.
- **Whitespace Handling:** `std::cin` by default ignores leading whitespace but stops reading when it encounters whitespace for strings.
- **Error Handling:** Always consider validating user input to handle unexpected values and avoid errors in your program.

User input is a fundamental way to interact with users in console-based programs, allowing for dynamic and responsive applications.