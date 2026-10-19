#include <iostream>

int main(){
    double x, acc ;
    int n ;

    std::cin >> x >> n ;
    acc = x ;

    for(int i = 1; i < n; i++){
        acc = acc * x ;
    }

    std::cout << acc << std::endl ;
}