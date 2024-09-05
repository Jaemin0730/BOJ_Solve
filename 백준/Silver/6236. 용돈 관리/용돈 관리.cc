#include <bits/stdc++.h>
using namespace std;
#define ll long long

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int n, m;
int a[100000];

bool p (int k) {
    int sum = k;
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] > k) return false;
        if (sum - a[i] < 0) {
            cnt++;
            sum = k;
        }
        sum -= a[i];
    }
    return cnt <= m;
}

int main(void)
{
    z();
    cin >> n >> m;
    int sum = 0, sol;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int s = 1;
    int t = sum;
    while (s <= t) {
        int mid = (s + t) / 2;
        if (p(mid)) {
            t = mid - 1;
            sol = mid;
        }
        else {
            s = mid + 1;
        }
    }
    cout << sol;
}