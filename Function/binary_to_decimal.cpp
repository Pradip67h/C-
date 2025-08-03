#include <iostream>
using namespace std;

int binToDecimal(int binNum) {
    int ans = 0, pow = 1;
    
    while(binNum > 0){
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }
    return ans; // decimal form
}

int main() {
    int binNum = 1100101;

    cout << binNum << " Binary to Decimal = " << binToDecimal(binNum) << endl;

    return 0;
}
