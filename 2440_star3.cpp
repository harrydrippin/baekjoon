#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 1; i <= a; i++) {
        for (int s = i; s <= a; s++) cout << "*";
        cout << "\n";
    }

    return 0;
}