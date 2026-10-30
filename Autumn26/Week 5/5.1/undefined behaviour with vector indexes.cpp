#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;

    v.push_back(10);
    v.push_back(20);

    std::cout << v[0] << std::endl;
    std::cout << v[1] << std::endl;

    v[0] = 15;

    std::cout << v[0] << std::endl;

    // undefined from here onwards
    std::cout << v[4] << std::endl;

    v[2] = 30;

    std::cout << v[2] << std::endl;
    // I got 10 20 15, and then the code failedas v[4] is undefined

}