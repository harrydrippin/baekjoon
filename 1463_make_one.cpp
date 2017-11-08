#include <iostream>
#define MIN(x, y) ((x) > (y)) ? (y) : (x)

using namespace std;

int main() {
    int a, m[1000001];
    cin >> a;

    m[1] = 0;

    for (int i = 2; i <= a; i++) {
        m[i] = m[i - 1] + 1;
        if (i % 3 == 0) m[i] = MIN(m[i], m[i / 3] + 1);
        if (i % 2 == 0) m[i] = MIN(m[i], m[i / 2] + 1);
    }

    cout << m[a];

    return 0;
}
