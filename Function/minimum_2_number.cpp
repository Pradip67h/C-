#include <iostream>
using namespace std;

// Minimum of 2 numbers
int minOfTwo(int a, int b){   // parameters
    if(a < b){
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << "Min = " << minOfTwo(8, 6) << endl;   // arguments

    return 0;
}
