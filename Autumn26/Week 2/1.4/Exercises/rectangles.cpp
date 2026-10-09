#include <iostream>

int main(){
    double n1, n2, perimeter, area ;

    std::cout << "please enter the length of the first side" << std::endl ;
    std::cin >> n1 ;

    std::cout << "please enter the length of an adjacent side" << std::endl ;
    std::cin >> n2 ;

    perimeter = 2 * n1 + 2 * n2 ;
    area = n1 * n2 ;

    std::cout << "perimeter=" << "2*" << n1 << "+" << "2*" << n2 << "=" << perimeter << std::endl ;
    std::cout << "area=" << n1 << "*" << n2 << "=" << area << std::endl ;
    
}