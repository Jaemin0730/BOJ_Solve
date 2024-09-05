#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int main() {
  u
  ll a;
  scanf("%lld", &a);
  ll c[10] = {}, s = 1, sum = 0, t, r;  // t: 몫, r: 나머지
  while (a > 0) {
    t = a / (s * 10);
    r = a % (s * 10);
    for (int i = 0; i < 10; i++) {
      c[i] += t * s;
    }
    for (int i = 1; i <= r / s; i++) {
      c[i] += s;
    }
    c[(r / s + 1) % 10] += r % s;
    a -= 9 * s;
    s *= 10;
  }
  for (int i = 0; i < 10; i++) {
    cout << c[i] << " ";
  }
}