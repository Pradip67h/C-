#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    cout << "size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(45);
    vec.push_back(85);
    cout << "after push back size = " << vec.size() << endl;

    vec.pop_back();

    for(int val : vec) {   // for each loop
        cout << val << endl;
    } 

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    cout << vec.at(1) << endl;

    return 0;
}
