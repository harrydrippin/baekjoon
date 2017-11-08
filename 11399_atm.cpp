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

    int sum = 0, plus = 0;
    for (auto i = l.begin(); i != l.end(); i++) {
        plus += *i;
        sum += plus;
    }

    cout << sum;

    return 0;
}