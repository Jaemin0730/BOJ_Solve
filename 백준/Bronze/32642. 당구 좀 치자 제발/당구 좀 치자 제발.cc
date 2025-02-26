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
    ll n;
    cin >> n;
    ll a[200000] = {};
    ll sol = 0;
    for (ll i=1; i<=n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            a[i] = a[i - 1] - 1;
        } 
        else {
            a[i] = a[i - 1] + 1;
        }
    }
    for (ll i=1; i<=n; i++) {
        sol += a[i];
    }
    cout << sol;
}