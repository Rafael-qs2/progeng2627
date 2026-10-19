#include <iostream>

int main(){

    double acc = 0, x ;
    int i = 0, n ;

    std::cin >> x >> n ;

    while(i < n){
        acc += x ;
        i += 1 ;
    }

    std::cout << x << "*" << n << "=" << acc << std::endl ;
}