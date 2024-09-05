#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    int n, m;
    cin >> n >> m;
    ll a[n], sol = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (m--) {
        sort(a, a + n);
        ll x = a[0];
        ll y = a[1];
        a[0] = x + y;
        a[1] = x + y;
    }
    for (int i = 0; i < n; i++) {
        sol += a[i];
        //cout << a[i] << "!!\n";
    }
    cout << sol;
}