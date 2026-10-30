#include <iostream>

double maximum(double n1, double n2, double n3){

    if(n1 > n2 && n3 > n2){
        if(n1 > n3){
            return n1;
        }
        else{
            return n3;
        }
    }
    else if(n2 > n1 && n3 > n1){
        if(n2 > n3){
            return n2;
        }
        else{
            return n3;
        }
    }
    else if(n1 > n3 && n2 > n3){
        if(n1 > n2){
            return n1;
        }
        else{
            return n2;
        }
    }
    
    return n1; // if none of the ifs take place, all numbers are equal so n1 is indeed the maximum (and also the minimum), just like n2 and n3
}

int main(){
    std::cout << maximum(2, 3, 4) << std::endl;
    std::cout << maximum(8, 3, 6) << std::endl;
    std::cout << maximum(2, -3, 0) << std::endl;
    std::cout << maximum(2, 2, 2) << std::endl;
    std::cout << maximum(12, 3, 12) << std::endl;
}