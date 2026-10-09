#include <iostream>

int main(){
    double gbp, cv_rate, eur ;

    std::cout << "please enter your amount of money in british pounds" << std::endl ;
    std::cin >> gbp ;

    cv_rate = 1.18138 ;

    std::cout << "the current conversion rate from GBP to EUR is 1 GBP = 1.18138 EUR" << std::endl ;

    eur = gbp * cv_rate ;

    std::cout << "the equivalent amount in euros is: " << eur << " EUR" << std::endl ;

}