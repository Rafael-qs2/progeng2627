#include <iostream>

double mypow(double base, int exp){
    double result = 1;

    if(exp > -1){
        for(int i = 0; i < exp; i++){
          result *= base;
        }
    }
    else{
        for(int i = 0; i > exp; i--){ // can also do i < -exp; i++
            result *= base;
        }
        result = 1/result;
    }

    return result;
}

int main(){
    std::cout << "2^3 = " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2 = " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0 = " << mypow(1, 0) << std::endl;
    std::cout << "4^(-2) = " << mypow(4, -2) << std::endl; 
}