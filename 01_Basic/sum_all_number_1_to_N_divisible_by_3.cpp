#include <iostream>

int main() {
    int n;
    long long sum = 0; // Use long long for potentially large sums

    std::cout << "Enter a positive integer (n): ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0) { // Check divisibility by 3 using the modulo operator
            sum += i;
        }
    }

    std::cout << "The sum of numbers from 1 to " << n << " divisible by 3 is: " << sum << std::endl;

    return 0;
}
