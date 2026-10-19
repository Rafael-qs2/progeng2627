#include <iostream>

int main(){

    int n1, n2, q = 0 ;

    std::cout << "enter 2 numbers" << std::endl ;
    std::cin >> n1 >> n2 ;

    while(n1 > n2){

        std::cout << n1 << "-" << n2 << "=" << n1 - n2 << std::endl ;
        n1 -= n2 ;
        q += 1 ;
    }

    std::cout << "the quotient is " << q << " and the remainder is " << n1 << std::endl ;
}

    

    