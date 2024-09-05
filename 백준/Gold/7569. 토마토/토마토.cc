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

int m, n, h;
int MM[101][101][101] = {};        // 
int visited[101][101][101] = {};   // 
queue<pair<int, pii>> q;
int dx[6] = {0, 0, 0, 0, 1, -1};
int dy[6] = {0, 0 , 1, -1, 0, 0};
int dz[6] = {1, -1, 0, 0, 0, 0};

// 1:익은토마토, 0:익지않은토마토, -1:토마토가 없는 곳

int main(void) {
  u
  // 초기 세팅
  cin >> m >> n >> h;
  for (int i=0; i<h; i++) {
    for (int j=0; j<n; j++) {
      for (int k=0; k<m; k++) {
        cin >> MM[i][j][k];
        if (MM[i][j][k] == 1) q.push({i, {j, k}});
        if (MM[i][j][k] == 0) visited[i][j][k] = -1;
      }
    }
  }
  
  
  /*
  // 디버깅 확인 (1)
  for (int i=0; i<h; i++) {
    for (int j=0; j<n; j++) {
      for (int k=0; k<m; k++) {
        cout << MM[i][j][k] << " ";
      }
       cout << "\n";
    }
  }
  */
  

  // BFS 탐색 시작!
  while (!q.empty()) {
    int zz = q.front().fst;
    int yy = q.front().snd.fst;
    int xx = q.front().snd.snd;
    q.pop();
    for (int i=0; i<6; i++) {
      int nx = xx + dx[i]; 
      int ny = yy + dy[i];
      int nz = zz + dz[i];
      if (0 <= nx && nx < m && 0 <= ny && ny < n && 0 <= nz && nz < h && visited[nz][ny][nx] == -1) {
        visited[nz][ny][nx] = visited[zz][yy][xx] + 1;
        q.push({nz, {ny, nx}});
      }
    }
  }
  
  
  /*
  // 디버깅 확인 (2)
  for (int i=0; i<h; i++) {
    for (int j=0; j<n; j++) {
      for (int k=0; k<m; k++) {
        cout << visited[i][j][k] << " ";
      }
       cout << "\n";
    }
  }
  */
  
  
  int sol = -1;
  // BFS로 얻은 토마토 변한 날짜 가장 최대값 찾기
  for (int i=0; i<h; i++) {
    for (int j=0; j<n; j++) {
      for (int k=0; k<m; k++) {
        if (visited[i][j][k] == -1) {
          cout << -1;
          return 0;
        }
        sol = max(sol, visited[i][j][k]);
      }
    }
  }
  // 정답 출력하기
  cout << sol;
}