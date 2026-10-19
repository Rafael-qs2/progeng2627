#include <iostream>

int main(){
    double acc = 0, n ;
    int i = 0 ;

    std::cout << "enter a number:" << std::endl ;
    std::cin >> n ;

    while(n != 0){
        acc += n ;
        i += 1 ;

        std::cout << "the average so far is:" << std::endl ;
        std::cout << acc / i << std::endl ;

        std::cout << "enter a number:" << std::endl ;
        std:: cin >> n ;
    }
}