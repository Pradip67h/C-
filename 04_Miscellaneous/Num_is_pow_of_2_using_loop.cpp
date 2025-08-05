#include <iostream>
using namespace std;

bool isPowerofTwo(int n) {
    if (n <= 0) { // Powers of 2 are always positive
        return false;
    }
    while (n > 1) {
        if (n % 2 != 0) { // If it's not perfectly divisible by 2
            return false;
        }
        n = n / 2; // Divide by 2
    }
    return true; // If n becomes 1, it's a power of 2
}

int main() {
    int num1 = 16;
    int num2 = 7;
    int num3 = 0; // 2^0 is 1, considered a power of 2
    int num4 = 1;

    std::cout << num1 << " is power of 2: " << (isPowerofTwo(num1) ? "Yes" : "No") << std::endl;
    std::cout << num2 << " is power of 2: " << (isPowerofTwo(num2) ? "Yes" : "No") << std::endl;
    std::cout << num3 << " is power of 2: " << (isPowerofTwo(num3) ? "Yes" : "No") << std::endl;
    std::cout << num4 << " is power of 2: " << (isPowerofTwo(num4) ? "Yes" : "No") << std::endl;

    return 0;
}
