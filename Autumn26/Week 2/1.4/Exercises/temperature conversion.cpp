#include <iostream>

int main(){
    double c0, f0 ;

    std::cout << "please enter the temperature in celsius" << std::endl ;
    std::cin >> c0 ;

    f0 = 1.8 * c0 + 32 ;

    std::cout << "the equivalent temperature in fahrenheit is " << f0 << std::endl ;
    
}