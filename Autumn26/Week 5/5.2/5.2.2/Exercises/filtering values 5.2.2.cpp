#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){

    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> vin{1, 3.2, 0.57, -1.2, 75, -11.87, 12, -3.8763}, vout;
    int t;

    std::cout << "please enter a number" << std::endl;
    std::cin >> t;

    filter_v(vin, t, vout);

    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << std::endl;
    }
}