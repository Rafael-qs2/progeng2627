#include <iostream>

int main(){
    int n ;
    std::cin >> n ;

    for(int c1 = 0; c1 < n; c1++){

        for(int c2 = 0; c2 < n; c2++){

            std::cout << "*" ;
        }

        std::cout << std::endl ;
    
    }

}