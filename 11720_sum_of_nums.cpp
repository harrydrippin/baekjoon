#include <iostream>
#include <string>

using namespace std;

int main() {
    int tc, sum = 0;
    string a;
    cin >> tc >> a;

    for (int i = 0; i < a.length(); i++) {
        sum += (a.at(i) - 48);
    }

    cout << sum;

    return 0;
}
