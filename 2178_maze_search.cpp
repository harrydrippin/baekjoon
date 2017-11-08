#include <cstdio>
#include <queue>

using namespace std;

int n, m;
int maze[100][100] = {0};

void bfs(int x, int y) {
  queue<pair<int, int> > q;
  int dirX[] = {-1, 1, 0, 0};
  int dirY[] = {0, 0, 1, -1};

  q.push(make_pair(x, y));

  while (!q.empty()) {
    pair<int, int> temp = q.front(); 
    q.pop();
    int curX = temp.first;
    int curY = temp.second;
    for (int i = 0; i < 4; i++) {
      int movX = curX + dirX[i], movY = curY + dirY[i];
      if (movX < 0 || movX > n - 1 || movY < 0 || movY > m - 1) continue;
      if (maze[movX][movY] == 1) {
        maze[movX][movY] = maze[curX][curY] + 1;
        q.push(make_pair(movX, movY));
      }
    }
  }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        scanf("%1d", &maze[i][j]);

    maze[0][0] = 2;
    bfs(0, 0);

    printf("%d", maze[n - 1][m - 1] - 1);

    return 0;
}
