#include <iostream>
using namespace std;

int main(void) {
  int w, h; 
  cin >> w >> h;
  cout << w * h / 2 << "." << ((w*h) & 1 ? "5" : "0");
}