#include <iostream>
using namespace std;

int main(){
    int n;
    char ch = 'A';
    cout << "Enter a positive Number(n) : ";
    cin >> n;

    if(n<0) {
        cout << "Error! Please enter a positive Number!";
    } else {
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=i; j++) {
                cout << ch << " ";  
            }
            ch++;
            cout << endl;
        }
        return 0;
    }
}
