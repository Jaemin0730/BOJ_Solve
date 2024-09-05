#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n;

int main() {
  u
  cin >> n;
  vector<pii> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].fst;
        v[i].snd = i;
    }
    sort(v.begin(), v.end());
    int sol = -1;
    for (int i = 0; i < n; i++) {
        if (sol < v[i].second - i) {
            sol = v[i].second - i;
        }
    }
 
    cout << sol + 1;
}