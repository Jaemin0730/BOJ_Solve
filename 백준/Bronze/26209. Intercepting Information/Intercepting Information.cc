#include <bits/stdc++.h>
using namespace std;

int main() {
  bool tf = false;
  for (int i = 0; i < 8; i++) {
    int a; 
    cin >> a;
    if (a == 9) tf = true;
  }
  if (tf) cout << "F\n";
  else cout << "S\n";
}