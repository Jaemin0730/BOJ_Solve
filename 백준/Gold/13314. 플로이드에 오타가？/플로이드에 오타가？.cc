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
  int n = 100;  
  cout << n << '\n';  
  for (int y = 0; y < n; y++) {  
     for (int x = 0; x < n; x++) {  
         if (x == y) cout << 0 << " ";  
         else if (y == n - 1 || x == n - 1) cout << 1 << " ";  
         else cout << 10000 << " ";  
     }  
     cout << "\n";  
  }  
}