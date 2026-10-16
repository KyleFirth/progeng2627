#include <iostream>
int main(){
    double n, total = 0.0, count = 0.0, avg;
    std::cout << "Please enter an integer, or 0 to stop: ";
    std::cin >> n;
    while(n!=0){
        total = total + n;
        count = count + 1;
        avg = total/count;
        std::cout << "The current mean, of the " << count << " number(s) that has/have been entered is: " << avg << std::endl;
        std::cout << "Please enter an integer, or 0 to stop: " << std::endl;
        std::cin >> n;
    }
}