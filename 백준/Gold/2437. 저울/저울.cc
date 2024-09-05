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
int a[1000];

int main() {
  u
  cin >> n;
  for (int i = 0; i < n; i++) {
      cin >> a[i];
  }
  sort(a, a + n);
  int sol = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] > sol) {
            break;
        }
        sol += a[i];
    }
    cout << sol;
}