#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void printIntersection(vector<int>& arr1, vector<int>& arr2) {
    
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<int> intersection;
    set_intersection(arr1.begin(), arr1.end(),
                          arr2.begin(), arr2.end(),
                          back_inserter(intersection));

    cout << "Intersection of the two arrays: ";
    for (int val : intersection) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arrA = {1, 2, 3, 4, 5, 6};
    vector<int> arrB = {4, 5, 6, 7, 8, 9};

    printIntersection(arrA, arrB); 

    vector<int> arrC = {1, 2, 2, 3, 4};
    vector<int> arrD = {2, 2, 4, 5};

    printIntersection(arrC, arrD); 

    return 0;
}
