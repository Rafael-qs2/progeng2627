#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;

    v.push_back(10);
    v.push_back(20);

    std::cout << v.at(0) << std::endl;
    std::cout << v.at(1) << std::endl;
    std::cout << v.at(4) << std::endl;

}