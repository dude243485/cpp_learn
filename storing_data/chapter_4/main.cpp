#include <iostream>

using namespace std;

int main() {
    int x = 0;
    int i , j;

    //continues until both conditions are false
    for (i = 0, j = 10; i <= 5, j <= 20;  i++, j += 1){
        cout << i << " " << j << endl;
        x += i + j;    
    }
}