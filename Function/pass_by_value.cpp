#include <iostream>
using namespace std;

int sum(int a, int b) {
    a = a + 10;  // 15
    b = b + 10;  // 14
    return a+b;  // 29
}

int main() {
    int a = 5, b = 4;
    cout << sum(a, b) << endl;  // 29

    cout << a << endl;   // 5
    cout << b << endl;   // 4
    return 0;
}
