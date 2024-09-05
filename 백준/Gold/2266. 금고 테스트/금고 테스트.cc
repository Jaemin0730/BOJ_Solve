#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

// dp[i][j] = i층에서 j개의 금고를 떨어뜨렸을때 깨지는 최소한의 횟수
int dp[501][501] = {0};

int main() {
  u
  int n, m;
  // n: 층 총개수, m: 금고의 개수
  cin >> n >> m;
  for (int i=1; i<=n; i++) {
    dp[i][1] = i;
  }
  for (int i=1; i<=n; i++) {
    for (int j=2; j<=m; j++) {
      dp[i][j] = 1e9;
      for (int k=1; k<=i; k++) {
        dp[i][j] = min(dp[i][j], max(dp[k - 1][j - 1], dp[i - k][j]) + 1);
      }
    }
  }
  cout << dp[n][m];
}