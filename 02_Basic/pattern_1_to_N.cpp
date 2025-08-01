#include <iostream>
using namespace std;

int main() {
    int n;
    int num = 1;
    cout << "Enter a positive Number(N) : ";
    cin >> n;

    if(n<0) {
        cout << "Error! Please Enter a positive number";
    } else {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
        return 0;
    }
}
