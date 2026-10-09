#include <iostream>

int main(){
    double w_kg, h_m, BMI ;

    std::cout << "please enter your weight in kilograms" << std::endl ;
    std::cin >> w_kg ;

    std::cout << "please enter your height in metres" <<std::endl ;
    std::cin >> h_m ;

    BMI = w_kg / (h_m * h_m) ;

    std::cout << "your BMI is " << BMI << std::endl ;
}