#include <iostream>

using namespace std;

int main() {
    bool prime[1001];
    fill_n(prime, 1001, true);

    prime[1] = false;

    for (int i = 2; i <= 500; i++) {
        int temp = i;
        if (!prime[temp]) prime[temp] = false;
        temp += i;
        while (temp <= 1000) {
            prime[temp] = false;
            temp += i;
        }
    }

    int tc, a, count = 0;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        cin >> a;
        if (prime[a]) count++;
    }

    cout << count;

    return 0;
}
