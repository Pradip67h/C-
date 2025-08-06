#include <iostream> 
using namespace std;

int main() {
    const int SIZE = 5; 
    int numbers[SIZE];  

    
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter number " << i + 1 << ": "; 
        cin >> numbers[i]; 
    }

    cout << "\nThe numbers you entered are: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
