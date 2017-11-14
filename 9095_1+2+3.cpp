#include <iostream>

using namespace std;

int main() {
    int tc, m[12] = {0}, temp;

    m[0] = 1;
    
    for (int i = 1; i <= 11; i++) {
        if (i - 1 >= 0) m[i] += m[i - 1];
        if (i - 2 >= 0) m[i] += m[i - 2];
        if (i - 3 >= 0) m[i] += m[i - 3];
    }

    cin >> tc;
    for (int i = 0; i < tc; i++) {
        cin >> temp;
        cout << m[temp] << "\n";
    }

    return 0;
}
