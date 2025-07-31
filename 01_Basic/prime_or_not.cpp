#include <iostream>
using namespace std;

int main(){
    int n = 7;
    int i;
    bool isPrime = true;

    for(i=2; i<=n-1; i++){
        if(n%i==0){  // non-prime
            isPrime = false;
            break;
        }
    }
    if(isPrime == true) {
        cout << "Number is Prime No.\n";
    } else {
        cout << "Number is Not Prime No.\n";
    }
    return 0;
}
