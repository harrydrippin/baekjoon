#include <iostream>

using namespace std;

int main() {
    cout.unsetf(ios::fixed);
    cout.precision(9);
    double a, b;
    cin >> a >> b;
    cout << a / b;
    return 0;
}
