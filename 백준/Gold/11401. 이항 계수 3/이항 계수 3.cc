#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll n, k, a, b, c;

ll Cal(int x) {
  if (x == 0) {
    return 1;
  }
  if (x % 2 == 1) {
    return b * Cal(x - 1) % 1000000007;
  }
  else {
	c = Cal(x / 2);
	return c * c % 1000000007;
  }
}

int main() {
    u
    cin >> n >> k;
    a = 1, b = 1;
   for (int i = n; i >= n - k + 1; i--) {
     a = (a * i) % 1000000007;
   }
   for (int i = 1; i <= k; i++) {
     b = (b * i) % 1000000007;
   }
   b = Cal(1000000007 - 2);
   cout << a * b % 1000000007;
}