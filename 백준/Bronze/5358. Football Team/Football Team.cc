#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;



int main() {
  u
  string s;
  while (1) {
    getline(cin, s);
    if (cin.eof()) break;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'e') cout << 'i';
        else if (s[i] == 'i') cout << 'e';
        else if (s[i] == 'E') cout << 'I';
        else if (s[i] == 'I') cout << 'E';
        else cout << s[i];
    }
     cout << "\n";
  }
}