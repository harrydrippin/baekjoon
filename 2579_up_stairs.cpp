#include <iostream>
#define MAX(x, y) ((x) > (y)) ? x : y
using namespace std;

int main() {
    int stairs;
    cin >> stairs;

    int *scores = new int[stairs + 1];
    int m[301] = {0, };

    for (int i = 1; i < stairs + 1; i++) {
        cin >> scores[i];
    }

    m[1] = scores[1];
    m[2] = MAX(m[1] + scores[2], scores[2]);
    m[3] = MAX(m[1] + scores[3], scores[2] + scores[3]);

    for (int i = 4; i < stairs + 1; i++)
        m[i] = MAX(m[i - 2] + scores[i], m[i - 3] + scores[i - 1] + scores[i]);
    
    cout << m[stairs];

    return 0;
}
