#include <iostream>
#include <vector>

int main(){
    std::vector<int> v, ind;
    int n, s, counter = 0, tmp = 1;

    std::cout << "please enter n" << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){

        std::cout << "please enter a number" << std::endl;
        std::cin >> tmp;

        v.push_back(tmp);
    }

    std::cout << "please enter s" << std::endl;
    std::cin >> s;

    for(int i = 0; i < v.size() - 1; i++){
        if(v[i] == s){
            counter++;
            ind.push_back(i);
        }
    }

    if(counter == 0){
        std::cout << "there are no occurrences of " << s << std::endl;
    }

    else{
        std::cout << "there are " << counter << " occurrences of " << s << " at indices:" << std::endl;
        
        for(int i = 0; i < ind.size(); i++){
            std::cout << ind[i] << std::endl;
        }
    }
}