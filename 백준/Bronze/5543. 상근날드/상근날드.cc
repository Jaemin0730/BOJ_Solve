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
	int b1, b2, b3, c, s;
    cin >> b1 >> b2 >> b3 >> c >> s;
    int bMin = min({b1, b2, b3});
    int dMin = min(c, s);
    int pMin = bMin + dMin - 50;
    cout << pMin << endl;
}