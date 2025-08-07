#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    cout << "size = " << vec.size() << endl;
    
    for(int val : vec) {
        cout << val << endl;
    }
    return 0;  
}
