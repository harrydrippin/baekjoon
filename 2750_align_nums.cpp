#include <iostream>
#include <list>

using namespace std;

int main() {
    int n, temp;
    list<int> l;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        l.push_back(temp);
    }

    l.sort();

    for (auto iter = l.begin(); iter != l.end(); iter++) {
        cout << *iter << "\n";
    }

    return 0;
}
