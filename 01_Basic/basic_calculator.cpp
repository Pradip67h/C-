// +++++++++++++++++++  CALCULATOR +++++++++++++++++++

#include <iostream>
using namespace std;

int main() {
    char option;
    int a, b, res;
    cout << "Enter Your First Number: ";
    cin >> a;
    cout << "Enter Your Second Number: ";
    cin >> b;
    cout << "Enter Your Operator (+, -, *, /): ";
    cin >> option;
    switch (option)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;            
    
    default: 
    cout << "Error!";
        break;
    }
    if(res != option ){
      cout << "Result : " << res;
    }
    
    return 0;
}
