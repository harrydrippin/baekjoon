#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x, temp;
    vector<int> v;
    cin >> n >> x;

    while (n--) {
        cin >> temp;
        if (temp < x) v.push_back(temp);
    }

    for (auto iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << " ";
    }

    return 0;
}
