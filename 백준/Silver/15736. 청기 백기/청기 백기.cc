#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, s; 
  cin >> n;
  for (int i = 1; i * i <= n; i++) {
      s++;
  }
  cout << s;
}