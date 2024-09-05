#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int main(void)
{
    u;
    ll n,m;
    cin >> n;
    ll a[46];
    a[0] = 1;
    a[1] = 2;
    // 피보나치 수열 만들어주기!
    for (int i = 2; i < 46; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    while (n--) {
        cin >> m;
        vector<ll> v;
        for (int i = 45; i >= 0; i--) {
            if (a[i] <= m) {
                m -= a[i];
                v.push_back(a[i]);
            }
        }
        for (int i = v.size() - 1; i >= 0; i--) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
}