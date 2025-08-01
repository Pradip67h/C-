#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a positive Number(n) : ";
    cin >> n;

    if(n<0) {
        cout << "Error! Please Enter a positive Number";
    } else {
        for(int i=0; i<n; i++) {
            for(int j=0; j<i+1; j++) {
                cout << (i+1) << " ";
            }
            cout << endl;
        }
        return 0;
    }
}
