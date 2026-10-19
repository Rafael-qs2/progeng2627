#include <iostream>

int main(){
    double n, acc = 0 ;

    std::cout << "enter a number:" << std::endl ;
    std::cin >> n ;

    while(n != 0){
        acc += n ;

        std::cout << "the sum so far is:" << std::endl ;
        std::cout << acc << std::endl ;

        std::cout << "enter a number:" << std::endl ;
        std::cin >> n ;
    }
}