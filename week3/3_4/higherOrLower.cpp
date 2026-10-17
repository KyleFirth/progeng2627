#include <iostream>
int main(){
    int obj, lower, upper, range, guess, attempts = 1, max, min;
    std::cout << "Enter number [] lower bound [] upper bound []" << std::endl;
    std::cin >> obj >> lower >> upper;
    range = upper-lower;
    guess = lower + (range/2);
    std::cout << guess << std::endl;
    max = upper;
    min = lower;
    
    while(guess!=obj){
        if(guess>obj){
            max = guess;
            range = max - min;
            guess = min + (range/2);
            std::cout << guess << std::endl;
        }
        else if(guess<obj){
            min = guess;
            range = max - min;
            guess = min + (range/2);
            std::cout << guess << std::endl;
        }
        attempts = attempts + 1;
    }
    if(guess == obj){
        std::cout << "Number guessed as: " << guess << " and you entered " << obj << std::endl;
        std::cout << "Number of attempts: " << attempts << std::endl;
    }
}