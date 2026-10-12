#include <iostream>

int main(){
    double tempC, tempF;
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> tempC;
    tempF = tempC*(9.0/5)+32;
    std::cout << "In farenheight, the temperature is: " << tempF;
    
}