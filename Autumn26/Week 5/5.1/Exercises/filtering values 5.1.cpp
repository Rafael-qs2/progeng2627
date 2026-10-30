#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n, t, tmp = 1;

    std::cout << "please enter n" << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){

        std::cout << "please enter a number" << std::endl;
        std::cin >> tmp;
        
        v.push_back(tmp);
    }

    std::cout << "enter a number" << std::endl;
    std::cin >> t;

    std::cout << "numbers you entered smaller than " << t << ":" << std::endl;
    for(int i = 0; i < v.size(); i++){
        if(v[i] < t){
            std::cout << v[i] << std::endl;
        }
    }
}