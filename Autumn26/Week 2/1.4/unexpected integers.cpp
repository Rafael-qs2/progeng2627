#include <iostream>

int main(){
    std::cout << 5 / 2 << std::endl ;
    // this outputs 2 as both numbers are integers.
    // only the integer division is executed, giving
    // an integer as a result.

    std::cout << 5 / 2.0 << std::endl ;
    // this outputs 2.5, as one of the numbers is a
    // decimal, so a non-integer division takes place.
}