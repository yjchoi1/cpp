#include <iostream>
  
double getTotal(double prices[], int size);

int main() {
    // Your code here

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total;

    return 0;
}


// Follwing syntax wouldn't work. The reason is:
// When you pass an array to a function, it decays into what's known as pointer.
// That is, with in the function, we are not working with the array any more.
// We are working with pointer that points to the address of where the array begins. 
// So, this function has no idea how big is the array any more.
// We can't compute how many size of the array.  
double getTotal(double prices[]){
    double total = 0;

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){  // note: sizeof() function gives you 
        total += prices[i];
    }
 return total;
}

// Therefore, we need to pass the size of the array to the function. 
double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }
 return total;
}
