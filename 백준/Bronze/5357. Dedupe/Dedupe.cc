#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; 
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s; 
    cin >> s;
    string a = s.substr(0, 1);

    for (size_t j = 1; j < s.length(); j++) {
      if (s[j] == s[j - 1]) continue;
      a += s[j];
    }
    cout << a << "\n";
  }
}