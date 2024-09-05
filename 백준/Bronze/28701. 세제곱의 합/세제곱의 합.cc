#include <bits/stdc++.h>
using namespace std;

int main() {

  int n; 
  cin >> n;
  int sum = n * (n + 1) / 2;
  int a = sum * sum, b = 0;
  for (int i = 1; i <= n; i++) b += pow(i, 3);
  cout << sum << "\n" << a << "\n" << b << "\n";
}