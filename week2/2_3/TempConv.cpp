#include <iostream>
#include <string>
int main(){
    double temperature_in, temperature_out;
    std::string unit_in, unit_out;
    bool valid_unit = true;
    std::cin >> temperature_in >> unit_in;

    if((unit_in == "C")||(unit_in == "c")){
        unit_out = "F";
        temperature_out = (temperature_in*(9.0/5.0))+ 32;
    }
    else if((unit_in == "F")||(unit_in == "f")){
        unit_out = "C";
        temperature_out = (temperature_in - 32)*(5.0/9.0);
    }
    else{
        valid_unit = false;
    }

    if(valid_unit == true){
        std::cout << temperature_out << unit_out << std::endl;
    }
    else{
        std::cout << "Error invalid unit given. " << std::endl;
    }
}