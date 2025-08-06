#include <iostream>
using namespace std;
#include <vector> // Using std::vector for dynamic arrays

// Function to calculate sum and product of array elements
void calculateSumAndProduct(const vector<int>& arr, long long& sum, long long& product) {
    sum = 0;
    product = 1;

    for (int num : arr) { // Range-based for loop for easy iteration
        sum += num;
        product *= num;
    }
}

int main() {
    vector<int> my_array = {1, 2, 3, 4, 5}; // Example array

    long long array_sum;
    long long array_product;

    calculateSumAndProduct(my_array, array_sum, array_product);

    cout << "Sum of array elements: " << array_sum << endl;
    cout << "Product of array elements: " << array_product << endl;

    return 0;
}
