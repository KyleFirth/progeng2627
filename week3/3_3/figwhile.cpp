#include <iostream>
int main(){
    int n, i=0, j=0;
    std::cin >> n;
    while(i<n){
        while(j<n){
            std::cout << "*";
            j = j+1;
        }
        std::cout << std::endl;
        i = i+1;
        j = 0;
    }
}