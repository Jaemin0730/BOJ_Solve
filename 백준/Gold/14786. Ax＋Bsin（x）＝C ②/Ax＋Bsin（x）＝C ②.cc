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
    double a, b, c, n = 0, temp;
	cin >> a >> b >> c;
	while (fabs(a * n + b * sin(n) - c) > 0.000000001) {
		temp = n - (a * n + b * sin(n) - c) / (a + b * cos(n));
		n = temp;
	}
	cout << fixed;
	cout.precision(9);
	cout << n;
}