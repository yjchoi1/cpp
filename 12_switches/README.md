# Switch

The `switch` statement in C++ is a control structure that allows you to execute different blocks of code based on the value of a single variable or expression. It's similar to a series of `if-else` statements, but often more readable and efficient when dealing with multiple possible values for a single condition.

Here’s a basic outline of how it works:

1. **Variable or Expression**: You provide a variable or an expression to the `switch` statement.

2. **Case Labels**: Each possible value of that variable or expression is matched with a `case` label. If the variable matches a `case`, the code block associated with that case is executed.

3. **Break Statement**: After executing a case's block, a `break` statement is typically used to exit the switch. Without `break`, execution continues to the next case (this is called "fall-through").

4. **Default Case**: You can provide a `default` case, which will be executed if none of the `case` labels match the variable or expression. This is similar to the `else` in an `if-else` structure.

### Example:
```cpp
int number = 2;

switch (number) {
    case 1:
        std::cout << "Number is 1";
        break;
    case 2:
        std::cout << "Number is 2";
        break;
    case 3:
        std::cout << "Number is 3";
        break;
    default:
        std::cout << "Number is not 1, 2, or 3";
}
```

### How it works:
- If `number` is `2`, the switch will jump to `case 2`, execute the associated block (`std::cout << "Number is 2";`), and then break out of the switch.
- If `number` were `4`, none of the `case` labels would match, so the `default` block would execute.

This structure is helpful when you have multiple distinct values to compare against, especially when the variable can only take on a limited set of values.