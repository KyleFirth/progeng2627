#include <iostream>
int main(){
    int n, curmax, curmin;

    std::cout << "Enter: " << std::endl;
    std::cin >> n;

    curmax = n;
    curmin = n;

    std::cout << "Max so far: " << curmax << std::endl;
    std::cout << "Min so far: " << curmin << std::endl;

    while(n!= 0){
        std::cout << "Enter: " << std::endl;
        std::cin >> n;

        if(n>curmax){
            curmax = n;
        }
        if(n<curmin){
            curmin = n;
        }
        std::cout << "Current max is: " << curmax << std::endl;
        std::cout << "Min so far: " << curmin << std::endl;
    }
}