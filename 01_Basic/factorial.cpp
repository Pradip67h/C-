#include <iostream>
using namespace std;

int main() {
    int N; 
    long factorial = 1; 

    cout << "Enter a positive integer: "; 
    cin >> N; 

    if (N < 0) { 
        cout << "Error: Factorial is not defined for negative numbers." << endl; 
        return 1; 
    } else {
        for (int i = 1; i <= N; ++i) { 
            factorial *= i;
        }
        cout << "The factorial of " << N << " is " << factorial << endl;
    }
    return 0; 
}
