#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer (n): ";
    cin >> n;
    
    if(n<0){
        cout << "Error, Please Enter Positive integer number";
    } else {
         for(int i=1; i<=n; i++) { // outer

        for(int j=1; j<=n; j++){  // inner
            cout << j << " ";
    }
             cout << endl;
         }
    }
    return 0;
}
