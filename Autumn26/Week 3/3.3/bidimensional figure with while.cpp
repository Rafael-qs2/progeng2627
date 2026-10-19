#include <iostream>

int main(){
    int n, c1 = 0 ;
    std::cin >> n ;

    while(c1 < n){

        int c2 = 0 ;
        
        while(c2 < n){
            std::cout << "*" ;
            c2++ ;
        }

        c1++ ;

        std::cout << std::endl ;
    }
}