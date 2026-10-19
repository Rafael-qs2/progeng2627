#include <iostream>
#include <string>

int main(){
    std::string user_in ;

    std::cin >> user_in ;

    while(user_in != "STOP"){
        std::cout << user_in << std::endl ;
        std::cin >> user_in ;
    }
}