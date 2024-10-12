# include <iostream>

class Stove{

    private:
        int temperature = 0;  // abstraction: hiding unncesessary data from outside a class

    public:
        // constructor: initialize the private attribute
        Stove(int temperature) {
            setTemperature(temperature);
            // We don't need to use this->temperature since we are using the setter.
        }

        // getter: make a private attribute readable
        int getTemperature() {
            return temperature;
        }

        // setter: make a private attribute writable
        void setTemperature(int temperature) {
            if(temperature < 0) {
                this->temperature = 0;
            }
            else if(temperature > 100   ) {
                this->temperature = 100;
            }
            else {
                this->temperature = temperature;
            }
        }
};


int main() {

    // Abstraction: hiding unncesessary data from outside a class
    // getter: a function that makes a private attribute readable.
    // setter: a function that makes a private attribute writable.

    Stove stove(50);

    // public attributes can be accessed directly from the object.
    // this will give you an error since the temperature attribute is private
    // stove.temperaturue = 100;  

    // Instead, we use the getter to get the value of the temperature attribute.
    std::cout << "The temperature is " << stove.getTemperature() << " degrees.\n";

    // If you want to change the temperature, you can use the setter.
    stove.setTemperature(100);
    std::cout << "The temperature is " << stove.getTemperature() << " degrees.\n";


    return 0;


}