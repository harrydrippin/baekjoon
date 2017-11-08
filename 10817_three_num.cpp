#include <iostream>

using namespace std;

int main() {
    int c = 3, first = 0, second = 0, i;
    while (c--) {
        cin >> i;
        if (i >= first) {
            second = first;
            first = i;
        } else if (i >= second) {
            second = i;
        }
    }
    
    cout << second;
    return 0;
}