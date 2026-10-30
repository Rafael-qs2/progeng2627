#include <iostream>

void division(int a, int b, int& quo, int& rem){

    while(a > b){
        quo++;
        a -= b;
    }

    rem = a;
}

int main(){

    int n1, n2, quotient = 0, remainder = 0;

    std::cout << "please enter 2 numbers for a division" << std::endl;
    std::cin >> n1 >> n2;

    division(n1, n2, quotient, remainder);

    std::cout << "the quotient is " << quotient << std::endl;
    std::cout << "the remainder is " << remainder << std::endl;

}