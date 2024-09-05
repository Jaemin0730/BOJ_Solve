#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int gcd(ll x, ll y) {
    if (y == 0) return x;
    return gcd(y, x % y);
}

int main() {
  u
  int t;
  scanf("%d", &t);
  ll a, b, c;
  for (int i=0; i<t; i++){
      scanf("%lld %lld %lld", &a, &b, &c);
      if (a < c && b < c) printf("NO\n");
      else if (c % gcd(a, b) == 0) printf("YES\n");
      else printf("NO\n");
  }
}