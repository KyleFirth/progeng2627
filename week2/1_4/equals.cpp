#include <iostream>

int main(){
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;

    a = 2;

    std::cout << c << std::endl;
    //I expect that this should still print
    //out 3, since the value of c was 
    //computed before the value of 
    //a was updated. 
}