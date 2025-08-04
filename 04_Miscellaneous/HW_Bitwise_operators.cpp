#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 10;

   // 1. (6&10)
    cout << "a & b Bitwise Operators : " << (a&b) << endl;

   // 2. (6|10)
    cout << "a | b Bitwise Operators : " << (a|b) << endl;

   // 3. (6^10)
    cout << "a ^ b Bitwise Operators : " << (a^b) << endl;

   // 4. (10<<2)
    cout << "left Shift Op: " << (10<<2) << endl;
   // 5. (10>>1)
    cout << "Right Shift Op: " << (10>>1) << endl;

    return 0;
}
