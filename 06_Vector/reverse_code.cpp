#include <iostream>
using namespace std;
#include <vector>
#include <algorithm> 


void reverseVector(vector<int>& vec) {
    reverse(vec.begin(), vec.end());
}

int main() {
    vector<int> myVector = {1, 2, 3, 4, 5};

    cout << "Original vector: ";
    for (int x : myVector) {
        cout << x << " ";
    }
    cout << endl;

    reverseVector(myVector); 

    cout << "Reversed vector: ";
    for (int x : myVector) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
