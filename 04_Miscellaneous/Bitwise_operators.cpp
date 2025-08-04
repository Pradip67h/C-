#include <iostream>
using namespace std;

int main(){
    int a = 4, b = 8;

    int c = 3, d = 7;
    int n = 4;
    int m = 10;

    int p = 10;
    int q = 8;

    cout << (a&b) << endl;
    cout << (a|b) << endl;
    cout << (a^b) << endl;

    cout << (c^d) << endl;

    cout << (n<<1) << endl;

    cout << (n<<2) << endl;
    cout << (n<<3) << endl;

    cout << (m<<2) << endl;

    cout << "Right Shift Op: " << (p>>1) << endl;
    cout << "Right Shift Op: " << (q>>2) << endl;

    return 0;
}
