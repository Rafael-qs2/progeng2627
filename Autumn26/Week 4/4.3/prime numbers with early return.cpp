#include <iostream>

int smallest_factor(int n){

    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){
            return cf;
        }
    }
    
    return 0;
}

int main(){
    int n;
    std::cin >> n;

    if(smallest_factor(n) == 0){
        std::cout << n << " is a prime number" << std::endl;
    }
    else{
        std::cout << "the smallest factor of " << n << " is " << smallest_factor(n) << std::endl;
    }
}