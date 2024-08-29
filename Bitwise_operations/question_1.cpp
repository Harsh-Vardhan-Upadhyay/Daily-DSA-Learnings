
// This code help in understanding the bitwise operators and shows what are the outputs that we get when being used

#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 5;

    cout << "a & b: " << (a & b) << endl;
    cout << "a | b: " << (a | b) << endl;
    cout << "~a: " << (~a) << endl; 
    cout << "a ^ b: " << (a ^ b) << endl;

    return 0;
}