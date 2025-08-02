#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    long long a = 0;
    long long b = 1;
    long long result = 0;

    for (int i = 2; i <= n; ++i) {
        result = a + b; 
        a = b;          
        b = result;     
    }

    return result; 
}

int main() {
    int n;
    cout << "Enter the value of n to find the nth Fibonacci number: ";
    cin >> n;

    if (n < 0) {
        cout << "Fibonacci numbers are defined for non-negative integers." << endl;
    } else {
        long long nth_fib = fibonacci(n);
        cout << "The " << n << "th Fibonacci number is: " << nth_fib << endl;
    }

    return 0;
}
