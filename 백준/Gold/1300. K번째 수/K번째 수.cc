#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll n, k, sum, low, high, mid;

ll Count (ll mid) {
	ll x = 0;
	for (int i=1; i<=n; i++) {
		x += min(n, mid / i);
	}
	return x;
}

int main() {
	cin >> n >> k;
	k = min(k, ll(1000000000));
	low = 1, high = n * n;
	while (low <= high) {
		mid = (low + high) / 2;
		sum = Count(mid);
		if (sum < k) {
			low = mid  + 1;
		}
		else  {
			high = mid - 1;
		}
	}
	cout << low;
}