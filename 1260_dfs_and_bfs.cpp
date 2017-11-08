#include <iostream>
#include <queue>
#include <vector>
using namespace std;
 
int n, m;
bool mark[1001];
bool adj[1001][1001];
 
void dfs(int num) {
    cout << num << " ";
    for (int i = 1; i <= n; i++)    {
        if (adj[num][i] && mark[i] == 0) {
            mark[i] = true;
            dfs(i);
        }
    }
}
 
void bfs(int start) {
    queue<int> q;
    for (int i = 0; i <= n; i++) mark[i] = false;

    q.push(start);
    mark[start] = true;
 
    while (!q.empty()) {
        int num = q.front();
        q.pop();
 
        cout << num << " ";
 
        for (int i = 1; i <= n; i++) {
            if (adj[num][i] && !mark[i]) {
                mark[i] = true;
                q.push(i);
            }
        }
    }
}
 
int main() {
    int start;
    int from, to;
 
    cin >> n >> m >> start;
 
    for (int i = 0; i < m; i++) {
        cin >> from >> to;
        adj[from][to] = adj[to][from] = true;
    }
 
    mark[start] = 1;
    dfs(start);
    printf("\n");
    bfs(start);
 
    return 0;
}