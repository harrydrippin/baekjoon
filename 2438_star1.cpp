#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    cin >> a;

    string ret = "*";

    for (int i = 1; i <= a; i++) {
        cout << ret << "\n";
        ret += "*";
    }

    return 0;
}
