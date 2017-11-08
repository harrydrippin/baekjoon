#include <iostream>

using namespace std;

int zero;
int one;

int fibonacci(int n) {
    if (n == 0) {
        zero++;
        return 0;
    } else if (n == 1) {
        one++;
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        zero = 0, one = 0;
        int a;
        cin >> a;
    
        fibonacci(a);
        cout << zero << " " << one << "\n";
    }
    return 0;
}