#include <iostream>
using namespace std;

int main(void) {
  int n; 
  cin >> n;
  while (n--) {
      int x; 
      cin >> x;
      cout << x << " is " << (x & 1 ? "odd" : "even") << "\n";
  }
}