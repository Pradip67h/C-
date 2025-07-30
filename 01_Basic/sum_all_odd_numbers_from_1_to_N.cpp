#include<iostream>
using namespace std;

int main() {
    int n = 15;
    int oddSum = 0;
    
    // Print odd numbers
    for(int i=1; i<=n; i++) {
        if(i%2 != 0){
            oddSum += i;
        }
    }
    cout << "Odd Sum = " << oddSum << endl;
    return 0;
}
