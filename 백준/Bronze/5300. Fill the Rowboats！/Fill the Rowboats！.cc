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
  int n;
  cin >> n;
  for(int i=1; i<=n; i++) {
    cout << i << " ";
    if(i % 6 == 0 || n == i) {
      cout << "Go! ";
    }
  }
}