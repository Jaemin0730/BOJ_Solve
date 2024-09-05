#include <bits/stdc++.h>
using namespace std;
#define u                                                                      \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int, int> pii;

int t, n, a1, b1, a2, b2;
int cnt[301][301] = {};
bool visited[301][301] = {};
// 나이트의 특징 고려 -> 이 부분 생각 아쉬웠다....
int dx[8] = {-1, 1, 2, 2, 1, -1, -2, -2}, dy[8] = {2, 2, 1, -1, -2, -2, -1, 1};


bool BFS(int x, int y) {
  queue<pii> q;
  visited[x][y] = true;
  q.push({x, y});
  while (!q.empty()) {
    int xx = q.front().fst;
    int yy = q.front().snd;
    q.pop();
    for (int i = 0; i < 8; i++) {
      int nx = xx + dx[i];
      int ny = yy + dy[i];
      if (0 <= nx && nx < n && 0 <= ny && ny < n && !visited[nx][ny]) {
        visited[nx][ny] = true;
        q.push({nx, ny});
        cnt[nx][ny] = cnt[xx][yy] + 1;
        if (nx == a2 && ny == b2) return true;
      }
    }
  }
  return false;
}

int main(void) {
  u cin >> t;
  while (t--) {
    cin >> n;
    cin >> a1 >> b1 >> a2 >> b2;
    if (BFS(a1, b1)) cout << cnt[a2][b2] << "\n";
    else cout << 0 << "\n";
    memset(visited, 0, sizeof(visited));
    memset(cnt, 0, sizeof(cnt));
  }
}