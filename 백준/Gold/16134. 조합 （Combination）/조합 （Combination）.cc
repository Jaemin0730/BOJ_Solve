#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define P 1000000007LL
ll v[1000001], n, k, s[1000001];

ll Cal(ll x, ll y) {
    if (y == 0) return 1;
    if (y % 2 == 1) return (Cal(x, y - 1) * x) % P;
    ll h = Cal(x, y / 2) % P;
    return h * h % P;
}

int main() {
  u
  cin >> n >> k;
  v[0] = 1;
  for (int i = 1; i <= 1000000; i++) {
      v[i] = v[i - 1] * i % P;
  }
  s[1000000] = Cal(v[1000000], P - 2);
  for (int i = 1000000 - 1; 0 <= i; i--) {
      s[i] = s[i + 1] * (i + 1) % P;
  }
  ll a = v[n];
  ll b = (s[n - k] * s[k]) % P;
  cout << a * b % P;
}