#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, cnt = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    string s; 
    cin >> s;
    if (s.find('+') != string::npos)
      cnt++;
  }
  cout << cnt << "\n";
}