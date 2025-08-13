#include <iostream>
using namespace std;
#include <vector>

int linearSearch(const std::vector<int>& vec, int target) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    vector<int> myVector = {10, 20, 30, 40, 50};
    int targetValue = 50;

    int index = linearSearch(myVector, targetValue);

    if (index != -1) {
        cout << "Element " << targetValue << " found at index: " << index << endl;
    } else {
        cout << "Element " << targetValue << " not found in the vector." << endl;
    }

    return 0;
}
