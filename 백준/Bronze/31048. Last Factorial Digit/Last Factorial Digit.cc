#include <iostream>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
      int n, a = 1;
      cin >> n;
      for (int i=1; i<=n; i++) a = (a * i) % 10;
      cout << a << "\n";
  }
}