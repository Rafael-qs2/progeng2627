#include <iostream>

double maximum(double n1, double n2){

    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}

int main(){
    std::cout << maximum(2, 3) << std::endl;
    std::cout << maximum(8, 3) << std::endl;
    std::cout << maximum(2, -3) << std::endl;
    std::cout << maximum(2, 2) << std::endl;
    std::cout << maximum(12, 3) << std::endl;
}