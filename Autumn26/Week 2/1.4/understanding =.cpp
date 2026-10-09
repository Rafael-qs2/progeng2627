#include <iostream>

int main(){
    double a, b, c ;
    a = 1 ;
    b = 2 ;
    c = a + b ;

    std::cout << c << std::endl ;

    a = 2 ;

    std::cout << c << std::endl ;
    // I expect 3 to be printed, 
    // as the assigned value of c
    // was computed before 2 was
    // assigned to a. c has not yet 
    // been reevaluated as 2+2=4.

    c = a + b ;

    std::cout << c << std::endl ;
    // I expect 4 to be printed, 
    // as c has been assigned a new
    // value after 2 was assigned to a

}