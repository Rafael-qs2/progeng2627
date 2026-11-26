#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){

    std::string inputfilename, outputfilename;

    std::ifstream infile;
    std::ofstream outfile;

    std::vector<int> v;

    std::cout << "enter name of input file" << std::endl;
    std::cin >> inputfilename;

    infile.open(inputfilename);
    
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp);
    }

    infile.close();

    std::cout << "enter name you want for output file" << std::endl;
    std::cin >> outputfilename;

    outfile.open(outputfilename);

    for(int i = 1; i < v.size() + 1; i++){
        outfile << v[v.size() - i] << std::endl;
    }

    outfile.close();

}