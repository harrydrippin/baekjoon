#include <iostream>
#include <memory.h>
#include <queue>

using namespace std;

class Edge {
public:
    int from;
    int to;

    Edge(int from, int to) {
        this->from = from;
        this->to = to;
    }
};

int main() {
    int n, tc, x, y, sum = 0;
    cin >> n;

    bool *m = new bool[n + 1];
    memset(m, false, (n + 1) * sizeof(bool));

    m[1] = true;

    cin >> tc;
    Edge **edges = new Edge*[tc];
    for (int i = 0; i < tc; i++) {
        cin >> x >> y;
        edges[i] = new Edge(x, y);
    }

    queue<int> q;
    q.push(1);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int i = 0; i < tc; i++) {
            int from = edges[i]->from;
            int to = edges[i]->to;
            if (from == cur && m[to] == false) {
                m[to] = true;
                q.push(to);
            }

            if (to == cur && m[from] == false) {
                m[from] = true;
                q.push(from);
            }
        }
    }

    for (int i = 2; i < n + 1; i++) {
        if (m[i]) sum++;
    }

    cout << sum;

    return 0;
}
