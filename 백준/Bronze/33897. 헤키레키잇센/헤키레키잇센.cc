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
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.pb(a);
    }
    // x: 사용 횟수, y: 베어낸 최댓값, t: 임시값
    int x = 1, y = 1, t = 1;
    for (int i = 1; i < n; i++) {
        if (v[i - 1] > v[i]) {
            x++;
            y = max(y, t);
            t = 1;
        }
        else t++;
    }
    y = max(y, t);
    cout << x << " " << y;
}