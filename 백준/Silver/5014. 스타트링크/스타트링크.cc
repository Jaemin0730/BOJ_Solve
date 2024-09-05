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

int F, S, G, U, D;
int M[2];
bool visited[1000001] = {};
queue<int> q;
int cnt[1000001] = {};


int main(void) {
  u
  cin >> F >> S >> G >> U >> D;
  M[0] = U;
  M[1] = -D;

  visited[S] = true;
  q.push(S);
  while (!q.empty()) {
    int x = q.front();
    q.pop();
    for (int i=0; i<2; i++) {
      int y = x + M[i];
      if (0 < y && y <= F && !visited[y]) {
        visited[y] = true;
        q.push(y);
        cnt[y] = cnt[x] + 1;
        //cout << cnt[y] << "\n";
      }
    }
  }
  if (visited[G]) cout << cnt[G];
  else cout << "use the stairs";
}