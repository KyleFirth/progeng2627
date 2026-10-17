//A calculator that lets you do more than one calculation
#include <iostream>
#include <string>
int main(){
    double a, b;
    std::string input;
    while(input!="0"){
        std::cout << "Enter the first number, then press enter, then the operation (+,-,*,/), then enter, then the seccond number" << std::endl;
        std::cin >> a;
        std::cout << std::endl;
        std::cin >> input;
        std::cout << std::endl;
        std::cin >> b;
        if(input == "+"){
            std::cout << a << "+" << b << "=" << a+b << std::endl;
        }
        else if(input == "-"){
            std::cout << a << "-" << b << "=" << a-b << std::endl;
        }
        else if(input == "*"){
            std::cout << a << "*" << b << "=" << a*b << std::endl;
        }
        else if(input == "/"){
            std::cout << a << "/" << b << "=" << a/b << std::endl;
        }
    }
}