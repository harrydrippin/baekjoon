#include <iostream>

using namespace std;

int main() {
    int n, cur = 1, count = 1;
    cin >> n;

    while (n > cur) {
        cur = cur + count * 6;
        count++;
    }

    cout << count;
    return 0;
}
