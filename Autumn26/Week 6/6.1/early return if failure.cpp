#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main(){
    std::ifstream infile;
    std::string file_name;

    std::cout << "what is the name of the input file?" << std::endl;
    std::cin >> file_name;

    infile.open(file_name);

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}