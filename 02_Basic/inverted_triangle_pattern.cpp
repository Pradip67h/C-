#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive Number(n) : ";
    cin >> n;

    if(n<0) {
        cout << "Error! please enter a positive number";
    } else {
        for(int i=0; i<n; i++) { // outer loop
            // spaces
            for(int j=0; j<i; j++) {
                cout << " ";
            }

            // numbers
                for(int j=0; j<n-i; j++) {
                    cout << (i+1);
                }
                cout << endl;
            }
            return 0;
        }
}
