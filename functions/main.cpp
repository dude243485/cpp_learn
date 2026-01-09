#include <iostream>
#include <math.h>

using namespace std;

void combine(string first, string second){
    first.insert(0, "Mr. ");
    cout << first << " " << second << endl;
}
void combine(int first , int second){
    cout << first << " + " << second << " is " << first + second<< endl;
}

int main() {
    combine("Ude", "Daniel");
    combine(15, 20);
    return 0;
}