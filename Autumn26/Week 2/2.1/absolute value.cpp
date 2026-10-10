#include <iostream>

int main(){
    double n, absv ;

    // TO DO
    std::cout << "please enter a number (it can be negative)" << std::endl ;
    std::cin >> n ;

    if(n < 0){
        absv = -n ;
    }
    else{
        // TO DO
        absv = n ;
    }

    std::cout << "|" << n << "| = " << absv << std::endl ;
}

// if without else: you don't define absv in double.
// you put n = -n instead of absv = -n in the if conditional
// don't put an else conditional
// and replace last line to something like:
// std::cout << "absolute value of n is: " << n << std::endl ;
// this is not a good way of writing code, though.