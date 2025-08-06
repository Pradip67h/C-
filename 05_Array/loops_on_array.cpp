#include <iostream>
using namespace std;

int main() {

    int marks[6] = {89, 87, 94, 78, 89, 88};
    int size = 6;

    // int sz = sizeof(marks)
    cout << "Size of Array : " << sizeof(marks) << endl;
    cout << sizeof(marks) / sizeof(int) << endl;
    // loops : 0 to size-1

    for(int i=0; i<size; i++){
        cout << marks[i] << endl;
    }

    return 0;
}
