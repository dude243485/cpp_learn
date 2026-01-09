#include <iostream>
#include <climits>

using namespace std;

int main () {
    std::cout << "Int max : " << INT_MAX << " int min : " << INT_MIN << std::endl;
    std::cout << "Unsigned int max : " << UINT_MAX << std::endl;
    std::cout << "short max : " << SHRT_MAX << " short min : " << SHRT_MIN << std::endl;
    std::cout << "long long max : " << LLONG_MAX << " long long min : " << LLONG_MIN << std::endl;
    std::cout << "unsigned long : " << ULLONG_MAX << std::endl;
    return 0;
}