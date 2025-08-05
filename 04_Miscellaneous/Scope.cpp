#include <iostream>
using namespace std;

// Global variable x
int x = 5;

void myFunction() {
  // Local variable with the same name as the global variable (x)
  int x = 22;
  cout << x << "\n"; // Refers to the local variable x  :- Ans: 22
}

int main() {
  myFunction();

  cout << x; // Refers to the global variable x  :- Ans: 5

        
    return 0;
}
