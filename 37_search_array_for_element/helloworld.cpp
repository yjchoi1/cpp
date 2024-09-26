#include <iostream>

int searchArrary(int array[], int size, int element);

int main() {
    // Your code here

    int numbers[] = {1, 2, 3, 4, 5,6,7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

    index = searchArrary(numbers, size, myNum);

    if(index != -1){
        std::cout << myNum << "is at index " << index;
    }
    else{
        std::cout << myNum << "is not in the array";
    }

    return 0;
}

int searchArrary(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    // in cpp `-1` serves as a sentinel value 
    // It means that we did find what we are looking for
    return -1;  
}