#include <iostream>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
      long long x; cin >> x;
      cout << 2 * x - 1 << "\n";
  }
}