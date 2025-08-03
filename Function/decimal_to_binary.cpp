#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow = 1;

    while(decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;  // binary form
}

int main() {
    int decNum = 42;

    cout << decNum << " Decimal to Binary = " << decToBinary(decNum) << endl;

    for(int i=1; i<=10; i++){
        cout << i << " Decimal to Binary = " << decToBinary(i) << endl;
    }
    
    return 0;
}
