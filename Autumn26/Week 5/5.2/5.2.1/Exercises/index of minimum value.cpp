#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){

    int min_ind = 0, min_num = vin[0];

    if(vin.size() == 0){
        return -1;
    }

    else{
        for(int i = 1; i < vin.size(); i++){
            if(vin[i] < min_num){
                min_num = vin[i];
                min_ind = i;
            }
        }
    }

    return min_ind;
}

int main(){
    std::vector<double> v{1, 3.2, 0.57, -1.2, 75, -11.87, 12, -3.8763};

    if(v.size() > 0){
        std::cout << "the index of the minimum value is " << min_vector_element(v) << std::endl;
    }

}