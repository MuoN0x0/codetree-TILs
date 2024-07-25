#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int avg, sum;
    cin >> a >> b >> c;
    sum = a+b+c;
    avg = (a+b+c)/3;
    cout << sum << endl << avg << endl << sum-avg;
    return 0;
}