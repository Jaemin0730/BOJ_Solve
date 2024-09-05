#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, m; 
  cin >> h >> m;
  int s = 9 * 60, t = h * 60 + m;
  int c = t - s;
  cout << c << "\n";
}