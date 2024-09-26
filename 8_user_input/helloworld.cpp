#include <iostream>

int main()
{

    {
        std::string name;
        std::string fullname;
        int age;

        // Fist name
        std::cout << "What is first name?";
        std::cin >> name;
        // note that if you type in the char with white space (e.g., "Tom Cruise"), the following user input will be stoped
        // the getline function help with this.

        // Full name
        std::cout << "What is your full name?";
        std::getline(std::cin, fullname); // with getline function, you expect be able to type char with spaces.

        // However, the input buffer in `name` automatically put new line space `\n`, so you will not be able to
        // type your full name. There is a way to enable taking full input. See the next block

        // Age
        std::cout << "what is your age";
        std::cin >> age;

        std::cout << "Your first name: " << name << '\n';
        std::cout << "Your full name: " << fullname << '\n';
        std::cout << "You are age: " << age << " years old" << '\n';
    }

    {
        std::string name;
        std::string fullname;
        int age;

        // Fist name
        std::cout << "What is first name?";
        std::cin >> name;
        // note that if you type in the char with white space (e.g., "Tom Cruise"), the following user input will be stoped
        // the getline function help with this.

        // Full name
        std::cout << "What is your full name?";
        std::getline(std::cin >> std::ws, fullname); //This will elimiate white space (ws) from the previous input


    }
    return 0;
}
