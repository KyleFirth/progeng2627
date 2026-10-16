#include <iostream>
int main(){
    int n, total = 0, count = 0;
    std::cout << "Please enter an integer, or 0 to stop: ";
    std::cin >> n;
    while(n!=0){
        total = total + n;
        count = count + 1;
        std::cout << "The current total, of the " << count << " number(s) that has/have been entered is: " << total << std::endl;
        std::cout << "Please enter an integer, or 0 to stop: " << std::endl;
        std::cin >> n;
    }
}