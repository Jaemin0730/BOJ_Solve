#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; 
  cin >> n;
  vector<int> num(n);
  int c = 0;
  for (int i = 0; i < n; ++i) {
    cin >> num[i];
    if (num[i] % 2 == 0) c++;
  }
  if (c > n / 2) cout << "Happy\n";
  else cout << "Sad\n";
}