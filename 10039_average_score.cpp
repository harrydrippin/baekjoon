#include <iostream>

using namespace std;

int main() {
    int sum = 0, temp, count = 5;
    while (count--) {
        cin >> temp;
        sum += (temp < 40) ? 40 : temp;
    } 

    cout << sum / 5;

    return 0;
}
