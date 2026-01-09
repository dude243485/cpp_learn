#include <iostream>
#include <math.h>

using namespace std;

int  absoluteDiff(int n){
    int absDiff = n - 51;
    absDiff = abs(absDiff);

    if (n > 51){
        return absDiff * 3;
    }
    return absDiff;
}

int main  () {
    cout << absoluteDiff(53) << endl;
    cout << absoluteDiff(30) << endl;
    cout << absoluteDiff(51) << endl;
    return 0;
}