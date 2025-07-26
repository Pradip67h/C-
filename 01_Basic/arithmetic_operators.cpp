// +++++++++++++++++++++  Arithmetic Operators  ++++++++++++++++++
#include <iostream>
using namespace std;

int main(){
    int a = 10, b =  5;

    cout << "sum = " << (a+b) << endl;
    cout << "difference = " << (a-b) << endl;
    cout << "product = " << (a*b) << endl;
    cout << "division = " << (a/b) << endl;
    cout << "modulo = " << (a%b) << endl;

    cout << (5 / (double)2) << endl;     // 2.5

    int ans = (5 / (double)2);
    cout << ans << endl;             // 2
    
    return 0;
}
