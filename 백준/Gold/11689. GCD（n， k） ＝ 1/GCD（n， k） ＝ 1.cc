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
    ll sol= n;
    for (ll i = 2; i * i <= n; i++) {   
        if (n % i == 0) {
            sol -= sol / i;
            while (n % i == 0) {
              n /= i;
            }
        }
    }
    if (n > 1) {
        sol -= sol / n;
    }
    cout << sol;
}