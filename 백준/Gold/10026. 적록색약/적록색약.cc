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

// 적록색약 O 횟수 = sol1 - sol2
int n, sol1 = 0, sol2 = 0;
int MM[101][101] = {};
bool visited[101][101] = {};
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

// R : 17, G : 6, B : 1

void BFSR(int x, int y) {
  queue<pii> q;
  visited[x][y] = true;
  q.push({x, y});
  while (!q.empty()) {
    int xx = q.front().fst;
    int yy = q.front().snd;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = xx + dx[i];
      int ny = yy + dy[i];
      if (0 <= nx && nx < n && 0 <= ny && ny < n && !visited[nx][ny] && MM[nx][ny] == 17) {
        visited[nx][ny] = true;
        q.push({nx, ny});
      }
    }
  }
}

void BFSG(int x, int y) {
  queue<pii> q;
  visited[x][y] = true;
  q.push({x, y});
  while (!q.empty()) {
    int xx = q.front().fst;
    int yy = q.front().snd;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = xx + dx[i];
      int ny = yy + dy[i];
      if (0 <= nx && nx < n && 0 <= ny && ny < n && !visited[nx][ny] && MM[nx][ny] == 6) {
        visited[nx][ny] = true;
        q.push({nx, ny});
      }
    }
  }
}

void BFSB(int x, int y) {
  queue<pii> q;
  visited[x][y] = true;
  q.push({x, y});
  while (!q.empty()) {
    int xx = q.front().fst;
    int yy = q.front().snd;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = xx + dx[i];
      int ny = yy + dy[i];
      if (0 <= nx && nx < n && 0 <= ny && ny < n && !visited[nx][ny] && MM[nx][ny] == 1) {
        visited[nx][ny] = true;
        q.push({nx, ny});
      }
    }
  }
}

void BFSRG(int x, int y) {
  queue<pii> q;
  visited[x][y] = true;
  q.push({x, y});
  while (!q.empty()) {
    int xx = q.front().fst;
    int yy = q.front().snd;
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = xx + dx[i];
      int ny = yy + dy[i];
      if (0 <= nx && nx < n && 0 <= ny && ny < n && !visited[nx][ny] && (MM[nx][ny] == 17 || MM[nx][ny] == 6)) {
        visited[nx][ny] = true;
        q.push({nx, ny});
      }
    }
  }
}

int main(void) {
  u cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < n; j++) {
      MM[i][j] = s[j] - 'A';
    }
  }


  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (MM[i][j] == 17 && !visited[i][j]) {
        //cout << i << " " << j << "R\n";
        BFSR(i, j);
        sol1++;
      } 
      else if (MM[i][j] == 6 && !visited[i][j]) {
        //cout << i << " " << j << "G\n";
        BFSG(i, j);
        sol1++;
      } 
      else if (MM[i][j] == 1 && !visited[i][j]) {
        //cout << i << " " << j << "B\n";
        BFSB(i, j);
        sol1++;
      }
    }
  }
  //cout << "--------------------------------" << "\n";
  memset(visited, 0, sizeof(visited));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) { 
      if ((MM[i][j] == 17 || MM[i][j] == 6) && !visited[i][j]) {
        //cout << i << " " << j << "G\n";
        BFSRG(i, j);
        sol2++;
      }
      else if (MM[i][j] == 1 && !visited[i][j]) {
        //cout << i << " " << j << "B\n";
        BFSB(i, j);
        sol2++;
      }
    }
  }
  cout << sol1 << " " << sol2;
}