#include <iostream>

using namespace std;

string addIf(string s){
    string start = s.substr(0, 2);
    if (start == "if"){
        return s;
    }

    return s.insert(0, "if ");
}

int main() {
    cout << addIf("if else") << endl;
    cout << addIf("else") << endl;
    return 0;
}