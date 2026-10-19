#include <iostream>
#include <cmath>

int main(){
    int n ;
    bool factor_found = false ;

    std::cout << "please enter an integer n > 1" << std::endl ;
    std::cin >> n ;

    for(int cf = 2; cf < sqrt(n); cf++){ // sqrt to not test until n-1, as every non-prime number n has a factor f, f != 1, such that f<sqrt(n)

        if((n % cf) == 0){
            factor_found = true ;
            cf = n ; // to end the loop
        }
    }
    
    if(factor_found){
        std::cout << "the number is not prime" << std::endl ;
    }

    else{
        std::cout << "the number is prime" << std::endl ;
    }
}