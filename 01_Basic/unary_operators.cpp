// +++++++++++++++++  Unary Operators  +++++++++++++++

#include <iostream>
using namespace std;

int main() {
    int a = 10;

    int b = a++;                   // work first ; update last
    cout << "b = " << b << endl;    // 10 
    cout << "a = " << a << endl;    // 11

    int c = 20;
    
    int d = --c;                    // update first ; work last 
    cout << "d = " << d << endl;    // 19
    cout << "c = " << c << endl;    // 19
    return 0;
}

// Increment ++
// Decrement --
