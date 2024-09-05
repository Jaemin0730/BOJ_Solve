#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 100001

vector<int> v[MAX];
int t[MAX] = {};

void DFS (int k) {
  for (int i=0; i<v[k].size(); i++) {
    t[v[k][i]] += t[k];
    DFS(v[k][i]);
  }
}

int main() {
  u
  int a, b;
  cin >> a >> b;
  for (int i=1; i<=a; i++) {
    int x;
    cin >> x;
    v[x].pb(i);  // x의 상사 번호를 vector에 저장해주자!
  }
  while (b--) {
    int n, m; // n이 상사로부터 m의 칭찬을 받았음
    cin >> n >> m;
    t[n] += m;  // n이 m만큼에 칭찬을 받은 것을 배열에 저장(t라는 배열)
  }
  // 1번 노드부터 마지막 노드까지 DFS 탐색 실시 (0번은 사장이라서 실시 X)
  DFS(1);
  for (int i=1; i<=a; i++) {
    cout << t[i] << " ";
  }  
}