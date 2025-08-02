#include <iostream>
using namespace std;

// calculate N Factorial ?
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
}

int main(){
    cout << "Factorial of 4 is: " << factorial(4) << endl;
    cout << "Factorial of 5 is: " << factorial(5) << endl;

    return 0;
}
