#include <iostream>
int main(){
    int year;
    bool ly;
    std::cout << "Please enter a year: " << std::endl;
    std::cin >> year;
    if((year%4) == 0){
        if((year%100 == 0)){
            if((year%400 == 0)){
                ly = true;
            }
            else{
                ly = false;
            }
        }
        else{
            ly = true;
        }
    }
    else{
        ly = false;
    }
    if(ly == true){
        std::cout << year << " is a leap-year. " << std::endl;
    }
    else{
        std::cout << year << " is not a leap-year. " << std::endl;
    }
}