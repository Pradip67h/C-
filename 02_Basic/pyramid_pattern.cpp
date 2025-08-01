#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive Number(n) : ";
    cin >> n;

    if(n<0) {
        cout << "Error! please enter a positive number";
    } else {
        for(int i=0; i<n; i++) {  // outer loop print 1 to n

            // spaces : n-i-1
            for(int j=0; j<n-i-1; j++) {
                cout << " ";
            }

            // nums 1 : i+1
            for(int j=1; j<=i+1; j++) {
                cout << j;
            }

            // nums 2 
            for(int j=i; j>0; j--){
                cout << j;
            }
            cout << endl;
        }
        return 0;
    }
}
