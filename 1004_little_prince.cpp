#include <iostream>
#include <cmath>
#include <memory.h>

using namespace std;

bool isInCircle(int x, int y, int cx, int cy, int r) {
    return sqrt(pow(cx - x, 2) + pow(cy - y, 2)) < r;
}

int main() {
    int tc, x1, y1, x2, y2, n, cx, cy, r, ret;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        ret = 0;
        cin >> x1 >> y1 >> x2 >> y2 >> n;

        bool *first = new bool[n], *second = new bool[n];
        memset(first, false, n * sizeof(bool));
        memset(second, false, n * sizeof(bool));

        for (int j = 0; j < n; j++) {
            cin >> cx >> cy >> r;
            if (isInCircle(x1, y1, cx, cy, r)) first[j] = true;
            if (isInCircle(x2, y2, cx, cy, r)) second[j] = true;
        }

        for (int j = 0; j < n; j++) {
            if (first[j] ^ second[j]) ret++;
        }

        cout << ret << "\n";
    }

    return 0;
}
