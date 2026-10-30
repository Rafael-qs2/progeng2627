#include <iostream>
#include <cmath>

int main(){
    double x, acc = 0;
    int n;

    std::cin >> x >> n;

    for(int i = 1; i < (n+1); i++){
        acc += std::pow(x, i);
    }

    std::cout << "sum of powers: " << acc << std::endl;
}