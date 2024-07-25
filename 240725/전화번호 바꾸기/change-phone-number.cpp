#include <iostream>
using namespace std;

int main() {
    string c, xxxx, yyyy;
    cin >> c;
    xxxx = c.substr(4, 4);
    yyyy = c.substr(9, 4);
    cout << "010-" << yyyy << "-" << xxxx;
    return 0;
}