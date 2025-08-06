#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 15, 22, 1, -15, 24};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    if (n == 0) {
        cout << "Array is empty." << endl;
        return 0;
    }

    int min_val = arr[0];
    int min_idx = 0;
    int max_val = arr[0];
    int max_idx = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_idx = i;
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_idx = i;
        }
    }

    cout << "Smallest value: " << min_val << " at index: " << min_idx << endl;
    cout << "Largest value: " << max_val << " at index: " << max_idx << endl;

    return 0;
}
