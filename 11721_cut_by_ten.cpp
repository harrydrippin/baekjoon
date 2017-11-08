#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;

    for (int i = 1; i < a.length() + 1; i++) {
        cout << a.at(i - 1);
        if (i % 10 == 0) cout << "\n";
    }

    return 0;
}
