#include <iostream>
#include <math.h>

bool wHundred(int n){
    int diff1 = abs(100 - n);
    int diff2 = abs(200 - n);
    if (diff1  <= 10 || diff2 <= 10) {
        return true;
    }
    return false;
}

int main() {
    std::cout << wHundred(103) << std::endl;
    std::cout << wHundred(90) << std::endl;
    std::cout << wHundred(89) << std::endl;
    std::cout << wHundred(205) << std::endl;
    return 0;
}