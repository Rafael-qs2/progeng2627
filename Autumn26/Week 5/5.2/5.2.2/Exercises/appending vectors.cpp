#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){

    vout = vin1;
    for(int i; i< vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}

int main(){
    std::vector<int> v1{1, 7, 3, 4}, v2{2, -2, 19}, v12;

    append_vectors(v1, v2, v12);

    for(int i = 0; i < v12.size(); i++){
        std::cout << v12[i] << std::endl;
    }
}