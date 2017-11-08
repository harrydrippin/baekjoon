#include <iostream>
#include <queue>

using namespace std;

int main() {
    int m[100001];
    fill_n(m, 100001, 100002);
    int n, k;
    cin >> n >> k;

    m[n] = 0;

    queue<int> q;
    q.push(n);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        if (cur + 1 < 100001 && m[cur + 1] > m[cur] + 1) {
            m[cur + 1] = m[cur] + 1;
            q.push(cur + 1);
        }
        if (cur - 1 >= 0 && m[cur - 1] > m[cur] + 1) {
            m[cur - 1] = m[cur] + 1;
            q.push(cur - 1);
        }
        if (cur * 2 < 100001 && cur * 2 != 0 && m[cur * 2] > m[cur] + 1) {
            m[cur * 2] = m[cur] + 1;
            q.push(cur * 2);
        }
    }
    
    cout << m[k];

    return 0;
}
