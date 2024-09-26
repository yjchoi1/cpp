# include <iostream>
# include <cmath>

int main(){
    double x = 3.4;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << z << '\n';

    z = std::min(x, y);
    std::cout << z << '\n';

    z = std::pow(2, 3);  // with cmath 
    std::cout << z << '\n';

    z = std::sqrt(9);  // with cmath 
    std::cout << z << '\n';

    z = std::abs(-3);  // with cmath 
    std::cout << z << '\n';

    z = std::round(x);  // with cmath 
    std::cout << z << '\n';

    z = std::ceil(x);  // with cmath 
    std::cout << z << '\n';

    z = std::floor(x);  // with cmath 
    std::cout << z << '\n';



    return 0;
}
