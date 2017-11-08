#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    if (n < 100) {
        cout << n;
        return 0;
    }

    for (int i = n; i > 100; i--) {
        int temp = i;
        int one = temp % 10;
        temp /= 10;
        int ten = temp % 10;
        temp /= 10;
        int hundred = temp;
        
        if (hundred - ten == ten - one) cnt++;
    }

    cout << cnt + 99;
    return 0;
}
