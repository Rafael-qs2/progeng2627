#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){

    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == n){
            return i;
        }
    }

    return -1;
}

int main(){
    std::vector<int> v{1, 3, 0, -1, 5, -11, 12, -3, 5};
    int n;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    if(search_vector(n, v) != -1){
        std::cout << "the first appearance of " << n << " is at the position of index " << search_vector(n, v) << std::endl;
    }
    else{
        std::cout << n << " does not appear in this vector" << std::endl;
    }
}