#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;



int main(void)
{
    u;
    int a, b, c;
	cin >> a >> b >> c;
    if (a == b + c || b == a + c || c == a + b) {
        cout << 1;
    }
    else if (a == b * c || b == a * c || c == a * b) {
        cout << 2;
    }
    else {
		cout << 3;
	}
}