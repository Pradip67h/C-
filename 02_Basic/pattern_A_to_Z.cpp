#include <iostream>
using namespace std;

int main() {
    int n;
    char ch = 'A';
    cout << "Enter a positive Number(n) : ";
    cin >> n;

    if(n<0) {
        cout << "Error! please enter a positive number"; 
    } else {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++){
                cout << ch << " ";
                ch++;
            }
            cout << endl;
        }
        cout << "After Pattern : " << ch << endl;
        return 0;
    }
}
