#include <iostream>

int main(){
    int n, step = 0, max ; // Extension 1: added the variable "step" ; Extension 2: added the variable "max"

    std::cout << "enter an integer n > 0" << std::endl ;
    std::cin >> n ;

    max = n ;

    while(n != 1){

        if((n % 2) == 0){
            n = n / 2 ;
            std::cout << n << "\t" ;
        }
        else if((n % 2) == 1){
            n = 3 * n + 1 ;

            // Extension 2: obtain the maximum number
            if(n > max){
                max = n ;
            }

            std::cout << n << "\t" ;
        }

        step++ ;
    }

    // Extension 1: prints the amount of steps
    std::cout << std::endl ;
    std::cout << "arriving at 1 took " << step << " steps" << std::endl;

    // Extension 2: prints the maximum number obtained
    std::cout << "the highest number obtained, the maximum, is " << max << std::endl ;
}