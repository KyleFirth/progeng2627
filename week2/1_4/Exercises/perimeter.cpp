#include <iostream>

int main(){
    double len1, len2, perimeter;

    std::cout << "Enter the length of the first size of the rectangle in cm:" << std::endl;
    std::cin >> len1;
    std::cout << "Enter the length of the seccond side (ie an adjacent side to the one entered): " << std::endl;
    std::cin >> len2;

    perimeter = 2*len1 + 2*len2;

    std::cout << "The perimeter of the rectangle is: " << perimeter << "cm. " << std::endl;
    
}