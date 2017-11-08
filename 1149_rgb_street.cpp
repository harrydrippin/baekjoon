#include <iostream>
#define R 0
#define G 1
#define B 2

using namespace std;

int min(int x, int y) {
    return (x > y) ? y : x;
}

int main() {
    int n;
    cin >> n;

    int **data = new int*[n + 1];
    for (int i = 1; i < n + 1; i++) {
        data[i] = new int[3];
        cin >> data[i][R] >> data[i][G] >> data[i][B];
    }

    int **mem = new int*[n + 1];

    mem[1] = new int[3];
    mem[1] = data[1];

    for (int i = 2; i < n + 1; i++) {
        mem[i] = new int[3];
        mem[i][R] = data[i][R] + min(mem[i - 1][G], mem[i - 1][B]);
        mem[i][G] = data[i][G] + min(mem[i - 1][R], mem[i - 1][B]);
        mem[i][B] = data[i][B] + min(mem[i - 1][R], mem[i - 1][G]);
    }

    cout << min(mem[n][R], min(mem[n][G], mem[n][B]));

    return 0;
}
