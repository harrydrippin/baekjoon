#include <iostream>

using namespace std;

int main() {
    int n, ten, one, temp, count = 0;
    cin >> n;
    temp = n;

    while (1) {
        ten = temp / 10, one = temp % 10;
        temp = one * 10 + (ten + one) % 10;
        count++;

        if (n == temp) {
            cout << count;
            return 0;
        }
    }
}
