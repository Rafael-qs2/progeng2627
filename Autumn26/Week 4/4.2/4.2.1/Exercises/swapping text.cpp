#include <iostream>
#include <string>

void myswap(std::string& s1, std::string& s2){
    
    std::string tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;
}

int main(){
    std::string s1, s2;

    std::cout << "enter 2 words" << std::endl;
    std::cin >> s1 >> s2;

    myswap(s1, s2);

    std::cout << s1 << " " << s2 << std::endl;
}