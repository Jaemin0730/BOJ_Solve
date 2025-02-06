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
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
		int a;
        cin >> a;
		if(a % 2 == 1) cnt++;
	}
    cout << cnt;
}