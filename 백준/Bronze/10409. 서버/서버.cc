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
    int n, t;
	cin >> n >> t;
	int a,sum=0,cnt=0;	
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum += a;
		if (sum <= t)
			cnt++;
	}
	cout << cnt;
}