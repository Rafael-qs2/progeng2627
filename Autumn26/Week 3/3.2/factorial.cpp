#include <iostream>

int main(){
    int n, fact_n = 1 ;
    std::cin >> n ;

    for(int i = 0; i < n; i++){
        fact_n *= (i+1) ;
    }

    std::cout << n << "! = " << fact_n << std::endl ;
}