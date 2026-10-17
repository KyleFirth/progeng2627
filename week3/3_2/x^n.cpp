#include <iostream>
int main(){
    int x = 0, n = 0, total = 1;
    std::cout << "To find x^n, enter x[space]n" << std::endl;
    std::cin >> x >> n;
    for(int i = 0; i < n; i++){
        total = total*x;
    }
    std::cout << total << std::endl;
}