#include <bits/stdc++.h>
using namespace std;
#define u                                                                      \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int, int> pii;

string s, k;
double avg = 0;
float grade = 0;
double score[20];
float g[20];

int main() {
  u 
  for (int i = 0; i < 20; ++i) {
      cin >> s >> g[i] >> k;
      if (k == "A+") score[i] = 4.5;
      else if (k == "A0") score[i] = 4.0;
      else if (k == "B+") score[i] = 3.5;
      else if (k == "B0") score[i] = 3.0;
      else if (k == "C+") score[i] = 2.5;
      else if (k == "C0") score[i] = 2.0;
      else if (k == "D+") score[i] = 1.5;
      else if (k == "D0") score[i] = 1.0;
      else if (k == "F") score[i] = 0.0;
      else if (k == "P") {
          score[i] = 0.0;
          g[i] = 0;
      }
      avg += (score[i] * g[i]);
      grade += g[i];
  }
  avg = avg / grade;
  cout << fixed;
  cout.precision(6);
  cout << avg;
}