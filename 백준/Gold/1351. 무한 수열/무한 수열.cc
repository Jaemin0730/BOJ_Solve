#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll N, P, Q;
map<ll, ll> v;
ll dp (ll n) {
    if (n == 0) {
        return 1;
    }
    if (v[n])   {
        return v[n];
    }
    else {
        return v[n] = dp(n / P) + dp(n / Q);
    }
}

int main(void)
{
    u;
    cin >> N >> P >> Q;
    v[0] = 1;
    cout << dp(N);
}