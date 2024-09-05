#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; 
  cin >> n;
  int s = 0;
  for (int i = 0; i < n; i++) {
    string c; 
    cin >> c;
    int d = stoi(c.substr(2));
    if (d <= 90) s++;
  }
  cout << s << "\n";
}