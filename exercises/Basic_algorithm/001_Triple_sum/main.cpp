#include <iostream>

using namespace std;

int triple_sum(int num1, int num2){
    if (num1 == num2){
        return (num1 + num2) * 3;
    }

    return num1 + num2;
}

int main(){
    cout << triple_sum(2, 3)<< endl;
    cout << triple_sum(4, 5) << endl;
    cout << triple_sum(4, 4) << endl;
    return 0;
}