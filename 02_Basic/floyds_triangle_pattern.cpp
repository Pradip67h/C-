#include <iostream>
using namespace std;

  int main() {
  int n;
  int num = 1;
    cout << "Enter a positive Number(n) : ";
    cin >> n;

    if(n<0){
        cout << "Error! please enter a positive number.";
    } else {
        for(int i=0; i<n; i++) {
            for(int j=i+1; j>0; j--){  // backwards => i+1
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
        return 0;
    } 
}
