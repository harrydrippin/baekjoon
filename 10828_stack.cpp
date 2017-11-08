#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int tc, temp;
    string a;
    stack<int> s;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        cin >> a;
        if (a == "push") {
            cin >> temp;
            s.push(temp);
        } else if (a == "pop") {
            if (s.empty()) cout << -1 << "\n";
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        } else if (a == "size") {
            cout << s.size() << "\n";
        } else if (a == "empty") {
            cout << s.empty() << "\n";
        } else { // top
            if (s.empty()) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
    }

    return 0;
}
