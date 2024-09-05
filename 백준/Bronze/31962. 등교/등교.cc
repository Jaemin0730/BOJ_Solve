#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
  int n, x, sol = -1;
  cin >> n >> x;
  while (n--) {
    int s, t; 
    cin >> s >> t;
    if (s + t > x) continue;
    sol = max(sol, s);
  }
  cout << sol;
}