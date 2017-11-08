#include <iostream>
#include <list>

using namespace std;

int main() {
    int n, temp, sum = 0;
    list<int> a, b;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < n; i++) {
        cin >> temp;
        b.push_back(temp);
    }

    a.sort();
    b.sort(greater<int>());

    for (auto i = a.begin(), j = b.begin(); i != a.end(); i++, j++) {
        sum += (*i) * (*j);
    }

    cout << sum;

    return 0;
}
