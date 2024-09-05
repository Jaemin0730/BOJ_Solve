#include <bits/stdc++.h>

using namespace std;

int t1, e1, f1, t2, e2, f2;

int main() {
  cin >> t1 >> e1 >> f1 >> t2 >> e2 >> f2;
  int maxT = 3 * t1 + 20 * e1 + 120 * f1;
  int mel = 3 * t2 + 20 * e2 + 120 * f2;

  if (maxT > mel) cout << "Max\n";
  else if (maxT < mel) cout << "Mel\n";
  else cout << "Draw\n";
}