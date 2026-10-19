#include <iostream>

int main(){
    double acc = 1, x ;
    int n, i = 0 ;

    std::cin >> x >> n ;

    while(i < n){
        acc = acc * x ;
        i += 1 ;
    }

    std::cout << x << "^" << n << "=" << acc << std::endl ;
}