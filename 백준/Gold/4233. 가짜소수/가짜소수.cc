#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll mod;

bool Pcheck(int n) {
  // 소수인지 체크하기!
  for (int i=2; i*i<=n; i++) {
    if (n%i == 0) return false;
  }
  return true;
}

ll mpow (ll a, ll p) {
  if (p == 0){
      return 1;
  }
  else if (p == 1){
      return a;
  }
  else if (p%2 == 0){
      return (mpow(a, p/2) % mod * mpow(a, p/2) % mod) % mod;
  }
  else if (p%2 != 0){
      return (a * mpow(a, p-1) % mod) % mod;
  }
}

int main() {
  u
  while(1) {
    int p, a;
    cin >> p >> a;
    mod = p;
    if (p == 0 && a == 0) break;
    if (Pcheck(p) == true) {  // 소수이면 NO 출력
      cout << "no\n";
    }
    else {
      // 소수가 아니다? -> YES 출력하자
      if (mpow(a, p) == a) {
        cout << "yes\n";
      }
      else {
        cout << "no\n";
      }
    }
  }
}