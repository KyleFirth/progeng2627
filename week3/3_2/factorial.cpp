#include <iostream>
int main(){
    int n, fact = 1;
    std::cout << "Enter n to find n!" << std::endl;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        fact = fact*(n-i);
    }
    std::cout << fact << std::endl;
}