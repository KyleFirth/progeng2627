#include <iostream>
#include <string>
int main(){
    int c;
    std::string a, b;
    std::cout << "Enter the first character, then [enter], then the seccond character, then [enter], then the size of the square: ";
    std::cin >> a;
    std::cout << std::endl;
    std::cin >> b;
    std::cout << std::endl;
    std::cin >> c;
    for(int i = 0; i < c; i++){
        for(int j = 0; j < c; j++){
            if(i%2 == 0){
                if(j%2 == 0){
                    std::cout << a;
                }
                else{
                std::cout << b;
                }
            }
            else{
                if(j%2 == 0){
                    std::cout << b;
                }
                else{
                std::cout << a;
                }
            }
        }
        std::cout << std::endl;
    }
}