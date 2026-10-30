#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;

    v.push_back(34);
    v.push_back(72);
    v.push_back(53);

    std::cout << v[0] * ( v[1] + v[2] ) << std::endl;
}