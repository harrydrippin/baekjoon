#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int tc;
    string a;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        cin >> a;
        stack<bool> s;
        int open = 0, close = 0;
        for (int j = 0; j < a.length(); j++) {
            if (a.at(j) == '(') {
                s.push(true);
                open++;
            } else {
                if (!s.empty()) s.pop();
                close++;
            }
        }

        if (s.empty() && open == close) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
