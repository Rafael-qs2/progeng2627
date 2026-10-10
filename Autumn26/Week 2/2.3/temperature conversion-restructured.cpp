// code 2

#include <iostream>
#include <string>

int main(){
    double temp_in, temp_out ;
    std::string unit_in, unit_out ;

    std::cin >> temp_in >> unit_in ;

    bool valid_unit = true ;

    if(unit_in == "C" || unit_in == "c"){ // added the OR
        unit_out = "F" ;
        temp_out = 1.8 * temp_in + 32 ;
    }
    else if(unit_in == "F" || unit_in == "f"){ // added the OR
        unit_out = "C" ;
        temp_out = (temp_in - 32) / 1.8 ;
    }
    else{
        valid_unit = false ;
    }

    if(valid_unit == true){
        std::cout << temp_out << " " << unit_out << std::endl ;
    }
    else{
        std::cout << "error: unit not recognised" << std::endl ;
    }
    
}