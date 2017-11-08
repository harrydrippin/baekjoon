#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    string mul;
    int dic[10] = {0};
    cin >> a >> b >> c;
    mul = to_string(a * b * c);

    for (int i = 0; i < mul.length(); i++) {
        dic[mul.at(i) - 48]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << dic[i] << "\n";
    }

    return 0;
}
