#include <iostream>
int main(){
    int p, q, i = 0, num;
    std::cout << "Enter two numbers, p and q, seperated by a space, to find p/q" << std::endl;
    std::cin >> p;
    std::cin >> q;
    num = p;
    while((p>q)||(p==q)){
        i = i + 1;
        p = p - q;
    }
    std::cout << num << "/" << q << "=" << i << std::endl;

}