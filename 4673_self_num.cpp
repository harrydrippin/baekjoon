#include <iostream>

using namespace std;

int d(int a) {
    int temp = a;
    int thousand = a / 1000; a %= 1000;
    int hundred = a / 100; a %= 100;
    int ten = a / 10; 
    int one = a % 10;
    return temp + thousand + hundred + ten + one;
}

int main() {
    int temp;
    bool sieve[10000] = {false};
    for (int i = 0; i < 10000; i++) {
        int cur = i + 1;
        while (cur <= 10000) {
            temp = d(cur);
            cur = temp;
            if (temp > 10000) break;
            else sieve[temp - 1] = true;
        }
    }
    
    for (int i = 0; i < 10000; i++) {
        if (!sieve[i]) cout << i + 1 << "\n";
    }

    return 0;
}
