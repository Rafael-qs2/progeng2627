// I expect it to print: 0 1 2 3 on 4 different lines

#include <iostream>

int main(){
    int n = 4, i = 0 ;

    while(i < n){
        std::cout << i << std::endl ;
        i += 1 ;
    }
}