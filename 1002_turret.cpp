#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int dist = pow((x2 - x1), 2) + pow((y2 - y1), 2);
        int sum = r1 + r2, diff = abs(r1 - r2);

        if (dist == 0 && diff == 0) cout << -1 << "\n";
        else if (dist == 0 || pow(sum, 2) < dist || dist < pow(diff, 2)) cout << 0 << "\n";
        else if (dist == pow(sum, 2) || dist == pow(diff, 2)) cout << 1 << "\n";
        else cout << 2 << "\n";
    }

    return 0;
}
