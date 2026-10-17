#include <iostream>
int main(){
    int n, steps = 0, max = 0;
    std::cin >> n;
    max = n;
    while(n>1){
        if(n%2==0){
            n = n/2;
        }
        else{
            n = (3*n)+1;
        }
        steps = steps + 1;
        if(n>max){
            max = n;
        }
        std::cout << n << "\t";
    }
    std::cout << std::endl << "Number of steps: " << steps << std::endl;
    std::cout << "Max reached: " << max << std::endl;
}