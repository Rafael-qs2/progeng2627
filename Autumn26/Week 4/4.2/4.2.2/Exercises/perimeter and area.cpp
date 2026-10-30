#include <iostream>

double rect_perimeter(double s1, double s2){
    
    double perim;
    perim = 2 * (s1 + s2);

    return perim;
}

double rect_area(double s1, double s2){

    double area;
    area = s1 * s2;

    return area;
}

int main(){

    double n1, n2;

    std::cout << "please enter 2 numbers" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "perimeter is " << rect_perimeter(n1, n2) << std::endl;
    std::cout << "area is " << rect_area(n1, n2) << std::endl;
}