#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll v[1000001];

int main() {
    u
    ll a, b; // a:최소값 b:최대값
    int cnt = 0;
    scanf("%lld %lld", &a, &b);
    // 에스토스테네스의 체 사용
    for (ll i = 2; i * i <= b; i++) {
      ll n = a / (i * i);
      if (a % (i * i)) {
        n++;
      }
      while (n * i * i <= b) {
        v[n * i * i - a] = 1;
        n++;
      }
    }
    for (int i = 0; i <= b - a; i++) {
            if (v[i] == 0) cnt++;
    }
    printf("%d", cnt);
}