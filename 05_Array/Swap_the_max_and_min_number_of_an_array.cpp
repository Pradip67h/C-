#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void swapMinMax(vector<int>& arr) {
    if (arr.empty()) {
        return; 
    }

    auto minmax_it = minmax_element(arr.begin(), arr.end());
    
    swap(*minmax_it.first, *minmax_it.second);
}

int main() {
    vector<int> my_array = {4, 9, 1, 7, 5, 2, 8};

    cout << "Original array: ";
    for (int x : my_array) {
        cout << x << " ";
    }
    cout << endl;

    swapMinMax(my_array);

    cout << "Array after swapping min and max: ";
    for (int x : my_array) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
