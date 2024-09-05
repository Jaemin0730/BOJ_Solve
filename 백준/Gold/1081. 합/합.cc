#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll Cal(ll n)
{
  if (n <= 0) return 0;
  ll c[10] = {}, s = 1, sum = 0, t, r;  // t: 몫, r: 나머지
  while (n > 0) {
    t = n / (s * 10);
    r = n % (s * 10);
    for (int i = 0; i < 10; i++) {
      c[i] += t * s;
    }
    for (int i = 1; i <= r / s; i++) {
      c[i] += s;
    }
    c[(r / s + 1) % 10] += r % s;
    n -= 9 * s;
    s *= 10;
  }
  for (int i = 1; i < 10; i++) {
    sum += i * c[i];
  }
  return sum;
}

int main() {
  u
  ll a, b;
  scanf("%lld%lld", &a, &b);
  printf("%lld", Cal(b) - Cal(a-1));
}