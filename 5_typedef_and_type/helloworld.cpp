# include <iostream>
# include <vector>

// in <vector>, you have the following data type
// std::vector<std::pair<std::string, int>>
// you don't want to use it.
// typedef give you a way to define allias (nickname) for such datatype

typedef std::vector<std::pair<std::string, int>> pairlist_t; 
// common convention for the typedef is to end it with `_t`


void main1(){
    //standard way to define a variable
    std::vector<std::pair<std::string, int>> pairlist; 
}


void main2(){
    // this does the same thing with above case. 
    pairlist_t pairlist; 
}


int main(){

    return 0;

}

// Note
// typedef is replaced by `using`