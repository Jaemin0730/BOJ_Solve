#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main(void) {
  vector<pair<int, string>> v(7);
  for (int i=0; i<7; i++) {
      cin >> v[i].second >> v[i].first;
  }

  cout << max_element(v.begin(), v.end())->second;
  return 0;
}