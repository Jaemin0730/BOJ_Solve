#include <iostream>
using namespace std;

int main(void) {
  int n, u, l; 
  cin >> n >> u >> l;
  cout << (n < 1000 ? "Bad" : (u >= 8000 || l >= 260 ? "Very Good" : "Good"));
}