#include<iostream>
#include <vector>

double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i <vin.size(); i++){
        sum += vin[i];
    }

    return sum;
}

int main(){
    std::vector<double> v;
    double n, tmp = 1;

    std::cout << "how many elements in the vector?" << std::endl;
    std::cin >> n;

    std::cout << "please enter " << n << " numbers" << std::endl;
    for(int i = 0; i < n; i++){
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;
}