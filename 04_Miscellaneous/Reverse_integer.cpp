#include <iostream>
using namespace std;

int reverseInteger(int n) {
    int reversed_number = 0;
    while (n != 0) {
        int remainder = n % 10; // Get the last digit
        reversed_number = reversed_number * 10 + remainder; // Append to reversed_number
        n /= 10; // Remove the last digit from n
    }
    return reversed_number;
}

int main() {
    int num;
    cout << "Enter any Number :  ";
    cin >> num;
    int reversed = reverseInteger(num);
    cout << "Original number: " << num << endl;
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
