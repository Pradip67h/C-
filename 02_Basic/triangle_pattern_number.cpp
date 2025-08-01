#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive Number(n) : ";
    cin >> n;

    if(n<0){
        cout << "Error! please enter a positive number.";
    } else {
        for(int i=0; i<n; i++) {
            for(int j=1; j<=i+1; j++) {
                cout << j << " ";
            }
            cout << endl;
        }
        return 0;
    }
}
