#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    // Check if n is greater than 0 and (n AND (n - 1)) is 0
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    std::cout << "Is 16 a power of 2? " << (isPowerOfTwo(16) ? "Yes" : "No") << std::endl; // Yes
    std::cout << "Is 7 a power of 2? " << (isPowerOfTwo(7) ? "Yes" : "No") << std::endl;   // No
    std::cout << "Is 0 a power of 2? " << (isPowerOfTwo(0) ? "Yes" : "No") << std::endl;   // No
    std::cout << "Is 1 a power of 2? " << (isPowerOfTwo(1) ? "Yes" : "No") << std::endl;   // Yes
    return 0;
}
