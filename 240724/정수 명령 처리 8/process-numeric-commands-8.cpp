#include <iostream>
#include <list>

using namespace std;

int main() {
    int n, a;
    list<int> l;
    string orderMessage = "";

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> orderMessage;
        if(orderMessage == "push_front") {
            cin >> a;
            l.push_front(a);
        }
        else if(orderMessage == "push_back") {
            cin >> a;
            l.push_back(a);
        }
        else if(orderMessage == "pop_front") {
            cout << l.front() << endl;
            l.pop_front();
        }
        else if(orderMessage == "pop_back") {
            cout << l.back() << endl;
            l.pop_back();
        }
        else if(orderMessage == "size") {
            cout << l.size() << endl;
        }
        else if(orderMessage == "empty") {
            cout << l.empty() << endl;
        }
        else if(orderMessage == "front") {
            cout << l.front() << endl;
        }
        else if(orderMessage == "back") {
            cout << l.back() << endl;
        }
        else {
            cout << "유효하지 않은 명령어" << endl;
        }
    }

    return 0;
}