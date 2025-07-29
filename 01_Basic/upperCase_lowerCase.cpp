// ++++++++++++++++++++++ Find character Lowercase or Uppercase ++++++++++++++++++++++++++++
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter Char : ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z') {
        cout << "lowercase\n";
    } else {
        cout << "uppercase\n";
    }
    return 0;
}
