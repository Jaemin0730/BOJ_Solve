#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll cnt[1001];
ll sol = 0, sum = 0;

int main() {
  u
  int n, m, t;
  cin >> n >> m;
  for (int i=1; i<=n; i++) {
    cin >> t;
    sum += t;
    cnt[sum % m]++;
  }
  for (int i=0; i<=m; i++) {
    sol += cnt[i] * (cnt[i] - 1)  / 2;
  }
  cout << sol + cnt[0];
}