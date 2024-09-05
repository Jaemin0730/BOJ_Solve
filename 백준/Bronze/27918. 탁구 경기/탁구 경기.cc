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
  int n, a[2] = {}; // a[0] = D, a[1] = P
  cin >> n;
  for (int i=0; i<n; i++) {
    char c;
    cin >> c;
    if (c == 'D') {
      a[0]++;
    }
    else {
      a[1]++;
    }
    //cout << a[0] << " : " << a[1] << "\n";
    if(abs(a[0] - a[1]) >= 2) {
      //cout << a[0] << " : " << a[1];
      //return 0;
      break;
    }
  }
  cout << a[0] << ":" << a[1];
}  