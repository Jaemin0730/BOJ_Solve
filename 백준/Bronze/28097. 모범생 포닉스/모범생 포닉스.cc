#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<int> t(n);
  for (int i=0; i<n; i++) cin >> t[i];
  int s = accumulate(t.begin(), t.end(), 0) + 8 * (n - 1);
  cout << s / 24 << " " << s % 24;
}