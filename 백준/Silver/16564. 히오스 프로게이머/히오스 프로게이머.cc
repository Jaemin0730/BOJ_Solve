#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

ll a[MAX];

int main(void)
{
    z();
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    ll low = a[0];
    ll high = a[0] + k;
    ll mid;
    ll sol;
    while (low <= high) 
    {
        mid = (low + high) / 2;
        ll s = 0;
        for (int i = 0; i < n; i++) {
            if (mid > a[i]) {
                s += (mid - a[i]);
            }
            else {
                break;
            }
        }
        if (s <= k) {
            low = mid + 1;
            sol = mid;
            //cout << mid << "??\n";
        }
        else {
            high = mid - 1;
            //cout << mid << "!!\n";
        }
    }
    cout << sol;
}