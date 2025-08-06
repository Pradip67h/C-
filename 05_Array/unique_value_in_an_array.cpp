#include <iostream>
#include <vector>
#include <set>
#include <algorithm> 
using namespace std;

void printUniqueValues(const vector<int>& arr) {

    set<int> uniqueElements;

    for (int element : arr) {
        uniqueElements.insert(element);
    }

    cout << "Unique elements in the array: ";
    for (int element : uniqueElements) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    vector<int> my_array = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
    printUniqueValues(my_array);

    vector<int> another_array = {3, 3, 3, 3, 3};
    printUniqueValues(another_array);

    return 0;
}
