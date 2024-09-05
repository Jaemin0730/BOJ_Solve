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
    ll n;
    cin >> n;
    ll a[1500050] = {0, 1};
	for (int i = 2; i < 1500000; i++) {
		a[i] = (a[i - 1] + a[i - 2]) % 1000000;
	}
	cout << a[n % 1500000];
}