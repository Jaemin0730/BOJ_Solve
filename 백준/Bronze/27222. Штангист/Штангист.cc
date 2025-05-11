#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    u
    int n;
    cin >> n;
    vector<int> a(n);
    ll ans = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        if (a[i]) ans += max(r - l, 0);
        
    }
    
    cout << ans << '\n';
}