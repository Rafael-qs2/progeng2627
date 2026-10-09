#include <iostream>

int main(){
    int n, rem ;

    std::cout << "please enter a number" << std::endl ;
    std::cin >> n ;

    rem = n % 2 ;
    // modulo, just like python

    // if double is used, since 2 is 
    // recognised as an integer, the
    // calculation cannot take place
    // because n is double and not
    // an integer.

    std::cout << "in the following line, 0 means even and 1 means odd:" << std::endl ;
    std::cout << rem << std::endl ;

    // in the future, if will be used (?)
}