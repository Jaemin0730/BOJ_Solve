#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int a[2000] = {};
int n;
int sol = 0, cnt = 0;

int main() {
  u
  cin >> n;
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a, a + n);
  for (int i=0 ;i<n; i++) {
      sol = a[i];
      int l = 0, r = n - 1, sum;
      while (l < r) {
          sum = a[l] + a[r];
          if (sum == sol) { 
              if (l != i && r != i) {
                  cnt++;
                  break;
              }
              else if (l==i) l++;
              else if (r==i) r--;
          }
          else if (sum < sol) l++;
          else r--;
      }
  }
  cout << cnt;
}