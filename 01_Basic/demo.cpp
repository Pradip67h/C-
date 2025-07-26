#include <iostream>
using namespace std;

int main(){
    char grade = 'a';   // 97

    int value = grade;
    cout << value << endl;

    double price = 100.99;
    int newPrice = (int)price;
    cout << newPrice << endl;

    int age;
    cout << "Enter Your Age: ";
    cin >> age;
    cout << "Your age is : " << age << endl;
    return 0;
}