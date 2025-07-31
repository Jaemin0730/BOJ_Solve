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
    int n;
    cin >> n;
    string a[10000] = {};
    string b[10000] = {};
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            cnt++;
        }
    }
    cout << cnt;
}