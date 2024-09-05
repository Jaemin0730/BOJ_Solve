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

int n, m, a, b, x, y;
int MM[101][101] = {};
int visited[101] = {};
queue<int> q;


void BFS(int x) {
  q.push(x);
  while (!q.empty()) {
    int k = q.front();
    q.pop();
    for (int i=1; i<=n; i++) {
      if (MM[k][i] == 1 && !visited[i]) {
        q.push(i);
        visited[i] = visited[k] + 1;
      }
    }
  }
}

int main(void) {
  u
  cin >> n >> a >> b >> m;
  for (int i=0; i<m; i++) {
    cin >> x >> y;
    MM[x][y] = 1;
    MM[y][x] = 1;
  }
  visited[a] = 1;
  BFS(a);
  if (visited[b] < 0) cout << -1;
  else cout << visited[b] - 1;
}