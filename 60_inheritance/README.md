# Inheritance

In C++, class inheritance allows you to create a new class (derived class) based on an existing class (base class). The derived class inherits the properties and methods of the base class, but it can also have additional features or override existing ones.

### Basic Concepts:
1. **Base Class**: The class whose properties and methods are inherited.
2. **Derived Class**: The class that inherits properties and methods from the base class.
3. **Access Specifiers**:
   - `public`: The members of the base class are accessible as they are in the derived class.
   - `protected`: The members are accessible within the derived class and its subclasses, but not outside.
   - `private`: The members are not accessible from the derived class.


# Example

Let's create a more realistic example that demonstrates the use of all three access specifiers (`public`, `protected`, and `private`) in C++ inheritance.

### Scenario:
We will model a banking system with a base class `BankAccount`, representing a generic bank account. Then, we will create a derived class `SavingsAccount`, which inherits from `BankAccount` and adds specific functionalities for a savings account. We'll demonstrate how each access specifier behaves in this context.

### Example Code:

```cpp
#include <iostream>
using namespace std;

// Base class
class BankAccount {
private:
    double balance; // Private member: accessible only within BankAccount class

protected:
    string accountHolderName; // Protected member: accessible within derived classes

public:
    int accountNumber; // Public member: accessible anywhere

    // Constructor to initialize account details
    BankAccount(string name, int number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
    }

    // Public method to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    // Public method to display account information
    void displayBalance() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }

protected:
    // Protected method to get balance
    double getBalance() {
        return balance;
    }
};

// Derived class
class SavingsAccount : public BankAccount {
private:
    double interestRate; // Private member specific to SavingsAccount

public:
    // Constructor to initialize savings account details
    SavingsAccount(string name, int number, double initialBalance, double rate)
        : BankAccount(name, number, initialBalance) {
        interestRate = rate;
    }

    // Public method to add interest
    void addInterest() {
        double interest = getBalance() * (interestRate / 100);
        deposit(interest);
        cout << "Interest added at rate: " << interestRate << "%" << endl;
    }

    // Public method to display account details including interest rate
    void displayAccountDetails() {
        displayBalance(); // Calling base class method
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main() {
    // Create a savings account object
    SavingsAccount mySavings("John Doe", 123456, 1000.0, 5.0);

    // Display initial account details
    mySavings.displayAccountDetails();

    // Deposit money
    mySavings.deposit(500.0);

    // Add interest to the account
    mySavings.addInterest();

    // Display updated account details
    mySavings.displayAccountDetails();

    return 0;
}
```

### Explanation:

1. **Base Class (`BankAccount`)**:
   - **Private Member (`balance`)**: Only accessible within the `BankAccount` class. It cannot be accessed directly from outside the class or even by derived classes.
   - **Protected Member (`accountHolderName`)**: Accessible within the `BankAccount` class and any derived class. It cannot be accessed directly from outside the class.
   - **Public Member (`accountNumber`)**: Can be accessed from anywhere, including outside the class.
   - **Constructor**: Initializes the `accountHolderName`, `accountNumber`, and `balance`.
   - **Public Methods (`deposit` and `displayBalance`)**: Allow operations on the account, such as depositing money and displaying account information.
   - **Protected Method (`getBalance`)**: Returns the balance and is accessible within the derived class.

2. **Derived Class (`SavingsAccount`)**:
   - **Private Member (`interestRate`)**: Specific to the `SavingsAccount` class and not accessible outside this class.
   - **Constructor**: Uses the base class constructor to initialize inherited members and sets the `interestRate`.
   - **Public Methods (`addInterest` and `displayAccountDetails`)**: Add interest to the account based on the interest rate and display the savings account details.
   - **`addInterest`**: Uses the protected `getBalance()` method from the base class to calculate the interest and the public `deposit()` method to add it.

3. **Main Function (`main`)**:
   - Creates an object of `SavingsAccount` named `mySavings` with initial values.
   - Demonstrates using public methods to deposit money, add interest, and display account details.

### Output:

```
Account Holder: John Doe
Account Number: 123456
Current Balance: $1000
Interest Rate: 5%
Deposited: $500
Interest added at rate: 5%
Deposited: $75
Account Holder: John Doe
Account Number: 123456
Current Balance: $1575
Interest Rate: 5%
```

### Key Points:
- **Private Members (`balance` and `interestRate`)**: Cannot be accessed outside the class or by derived classes.
- **Protected Members (`accountHolderName`)**: Can be accessed by derived classes but not outside.
- **Public Members (`accountNumber`, methods)**: Accessible from anywhere.
- **Inheritance in C++**: The derived class `SavingsAccount` inherits from `BankAccount`, gaining access to public and protected members while also adding new members and methods. This allows for code reuse and extension.

This example demonstrates the different access levels (`public`, `protected`, and `private`) and how they control member accessibility in inheritance.


# What if I use `public` to `priviate` member instead?
The separation of `private`, `protected`, and `public` in C++ is essential for controlling access to the members of a class, providing encapsulation, and enforcing how the class's data and methods can be used or modified. Here’s why they are separated in this example, and what would happen if we changed the access level of the `getBalance()` method to `public`.

### Why Separate `protected`, `public`, and `private`?

1. **Private Members (`private`)**:
   - **Purpose**: To keep certain data strictly hidden from outside access and modification. This ensures that sensitive information (like `balance` in a bank account) is not directly accessible from outside the class, protecting it from unintended changes.
   - **Usage in Example**: In the `BankAccount` class, `balance` is a private member because it should not be modified or accessed directly by other parts of the program. Instead, modifications to `balance` should be controlled through public methods (like `deposit()`) to maintain the integrity of the account balance.

2. **Protected Members (`protected`)**:
   - **Purpose**: To allow derived classes to access the member, but still prevent direct access from outside code. It provides a balance between accessibility and encapsulation.
   - **Usage in Example**: The `accountHolderName` is set to `protected`, allowing derived classes like `SavingsAccount` to access and use the account holder's name while keeping it hidden from direct external access. The derived class can use it as needed without exposing it to the public interface.

3. **Public Members (`public`)**:
   - **Purpose**: To expose functionality to the outside world. Public members and methods can be accessed from anywhere in the code.
   - **Usage in Example**: The `accountNumber` and methods like `deposit()` and `displayBalance()` are set to public to allow external code (like the main function) to perform operations on the bank account in a controlled manner.

### What Happens if `getBalance()` is Public?

If we change the `getBalance()` method from `protected` to `public`, it will be accessible from outside the class, like any other public method. This means that code outside the `BankAccount` or `SavingsAccount` classes could directly call `getBalance()` to retrieve the balance. While this might seem convenient, it could violate the principles of encapsulation and data hiding in certain scenarios.

**Why Not Make `getBalance()` Public?**
- **Encapsulation and Data Protection**: By keeping `getBalance()` protected, we ensure that the balance is not accessed casually from outside the class. It encourages using other controlled methods like `deposit()` or `displayBalance()` to interact with the account in a way that preserves the integrity of the data.
- **Limiting Access Scope**: Sometimes, you want derived classes to have access to certain internal details (like the balance) without making that information available to all other code. Protected members achieve this balance, providing more fine-grained control over accessibility.
- **Future Flexibility**: By keeping certain members protected, you can change the internal representation of the class without affecting the public interface. If `getBalance()` was public, and you later decided to calculate the balance in a different way, it could affect code outside the class that relies on the public method.

### Example Scenarios with Public `getBalance()`:

1. **Direct Access from Main**:
   ```cpp
   cout << "Current Balance: $" << mySavings.getBalance() << endl;
   ```
   This would allow external code to access the balance directly. If we had complex rules about when the balance should be displayed, it would bypass those checks.

2. **Potential Misuse**:
   Allowing public access to internal data (like `balance`) can lead to misuse, such as using the balance directly in calculations instead of going through the class's controlled methods. It breaks the concept of encapsulation, where internal data is managed by the class itself.

### Conclusion:
Using `private`, `protected`, and `public` effectively allows you to:
- **Protect sensitive data** (`private`)
- **Expose only the necessary interface to derived classes** (`protected`)
- **Provide a controlled and safe public interface** (`public`)

Changing `getBalance()` to public would be less secure in this banking example, as it would expose sensitive information more freely. Keeping it `protected` allows derived classes to use it while still limiting its accessibility from the outside world.