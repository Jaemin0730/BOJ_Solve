#include <bits/stdc++.h>
using namespace std;

int main() {
  map<char, string> m = {
    {'M', "MatKor"},
    {'W', "WiCys"},
    {'C', "CyKor"},
    {'A', "AlKor"},
    {'$', "$clear"}
  };

  char c; 
  cin >> c;
  cout << m[c];
}