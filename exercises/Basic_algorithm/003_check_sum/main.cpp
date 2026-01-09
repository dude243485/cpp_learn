#include <iostream>

bool checkSum(int num1, int num2){
    if (num1 == 30 || num2 == 30 || num1 + num2 == 30){
        return true;
    }
    return false;
}   

int main () {
    std::cout << checkSum(30, 0) << std::endl;
    std::cout << checkSum(25, 5) << std::endl;
    std::cout << checkSum(20, 25) << std::endl;
    return 0;
}