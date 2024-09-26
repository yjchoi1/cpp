# include <iostream>

int main(){
   
   // explicit
    {
     
        double x = (int)3.14;

        std::cout << x; // returns 3
    }

    // implicit
    {
        char x = 100;  // implicitly cast 100 to a char (refer to ASCII table)
        std::cout << x;          
    }

    // explicit
    {
        std::cout << (char) 100;  // explicitly cast 100 to char
    }
     
    // example
    {
        // consider you get a survey of quize
        int correct  = 8;
        int questions = 10;
        // this will return 0
        // double score = correct/questions * 100;

        // rather we need to explicitly cast the value to double
        double score = correct/(double)questions * 100;
        
        // this will return 0
        std::cout << score << "%";
    }

    return 0;
}
