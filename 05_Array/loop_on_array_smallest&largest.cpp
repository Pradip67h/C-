#include <iostream>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT8_MAX;
    int largest = INT16_MIN;

    for(int i=0; i<size; i++) {
        smallest = min(nums[i], smallest); 
        largest = max(nums[i], largest);
    }

    cout << "Smallest Value = " << smallest << endl;
    cout << "Largest Value = " << largest << endl;
    
    return 0;
}
