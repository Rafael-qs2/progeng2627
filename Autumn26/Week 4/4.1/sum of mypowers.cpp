// in retrospect, was it really necessary to do it for negative exponents?

#include <iostream>

double mypow(double base, int exp){
    double result = 1;

    if(exp> -1){
        for(int i = 0; i < exp; i++){
            result *= base;
        }
    }
    else{
        for(int i = 0; i > exp; i--){ // can also do i < -exp; i++
            result *= base;
        }
        result = 1 / result;
    }

    return result;
}

int main(){

    double x, acc = 0;
    int n, abs_n;

    std::cin >> x >> n;
    abs_n = n;

    if(n < 0){
        abs_n = -n;
    }

    for(int i = 1; i < (abs_n + 1); i++){

        if(n > 0){
            acc += mypow(x, i);
        }
        else if(n < 0){
            acc += mypow(x, -i);
        }
    }

    std::cout << "sum of powers: " << acc << std::endl;
}