// +++++++++++++++++++  Logical Operators  +++++++++++++++++++

#include <iostream>
using namespace std;

int main() {

    cout << !(3 < 1) << endl;      // 1 :- True
    
    cout << ((3>1) || (5<4)) << endl;      // 1 :- True

    cout << ((5>4) && (7>4)) << endl;      // 1 :- True
    return 0;
}

//  ! are also flase = true & true = false.
//  ||  only for one true is return True.
//  &&  two times are true is return True.
