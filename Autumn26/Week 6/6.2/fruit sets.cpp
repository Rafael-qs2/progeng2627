#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){

    for(int i = 0; i < vin.size(); i++){

        if(vin[i] == s){
            return 1;
        }
    }

    return 0;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }

    for(int k = 0; k < vin2.size(); k++){
        if(search_vector(vin2[k], vin1) != 1){
            vout.push_back(vin2[k]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1[i], vin2) == 1){
            vout.push_back(vin1[i]);
        }
    }
}

int main(){

    std::ifstream infile;
    std::ofstream outfile;

    std::vector<std::string> v1, v2, v_union, v_intersection;

    std::string tmp;

    infile.open("warehouse1.txt");
    
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    while(infile >> tmp){
        v1.push_back(tmp);
    }

    infile.close();

    infile.open("warehouse2.txt");
    
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }


    while(infile >> tmp){
        v2.push_back(tmp);
    }

    infile.close();

    union_vector(v1, v2, v_union);
    intersection_vector(v1, v2, v_intersection);

    outfile.open("union.txt");

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = 0; i < v_union.size(); i++){
        outfile << v_union[i] << std::endl;
    }

    outfile.close();

    outfile.open("intersection.txt");

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = 0; i < v_intersection.size(); i++){
        outfile << v_intersection[i] << std::endl;
    }

    outfile.close();
}