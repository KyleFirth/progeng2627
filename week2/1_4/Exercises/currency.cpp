#include <iostream>

int main(){
    double ammount, exchangeRate, euroEquivalent;
    std::cout << "Enter the ammount in GBP: " << std::endl;
    std::cin >> ammount;
    std::cout << "Enter the current exchange rate from GBP to EUR: " << std::endl;
    std::cin >> exchangeRate;
    euroEquivalent = ammount*exchangeRate;
    std::cout << ammount << "GBP is equivalent to " << euroEquivalent << "EUR. ";

}