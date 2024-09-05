#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
  int a, b, k, x; ; 
  cin >> a >> b;
  cin >> k >> x;

  int sol = 0;
  for (int i=a; i<=b; i++) {
    if (abs(k-i) <= x) sol++;
  }
  
  if (sol == 0) cout << "IMPOSSIBLE";
  else cout << sol;
}