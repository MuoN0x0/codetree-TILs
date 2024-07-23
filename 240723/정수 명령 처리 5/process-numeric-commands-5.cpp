#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;              // 정수를 관리할 벡터를 선언하고 => 빈 벡터
    
    string push = "push_back";
    string pop = "pop_back";
    string size = "size";
    string get = "get";

    int n;
    int k;
    cin >> n;
    string orderMessage = "";

    for(int i=0; i<n; i++) {
        cin >> orderMessage;
        if(orderMessage == push) {
            cin >> k;
            v.push_back(k);
        }
        else if(orderMessage == pop) {
            v.pop_back();
        }
        else if(orderMessage == size) {
            cout << v.size() << endl;
        }
        else if(orderMessage == get) {
            cin >> k;
            cout << v[k-1] << endl;
        }
        else {
            cout << "유효하지 않은 명령어" << endl;
        }
    }

    

}