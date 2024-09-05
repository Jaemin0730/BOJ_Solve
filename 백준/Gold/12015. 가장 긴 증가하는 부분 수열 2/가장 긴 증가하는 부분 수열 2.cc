#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

vector<int> v = {1000000};

int main() {
	// 알고리즘 참고 사이트 -> https://chanhuiseok.github.io/posts/algo-55/
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		int k;
		cin >> k;
		if (k > v.back()) {
			v.pb(k);
		}
		else {
			// O(nlogn)의 시간복잡도를 사용하기 위해 lower_boun() 알고리즘 사용!
			// 입력받은 수의 해당하는 인덱스를 v에서 찾아 해당 인덱스를 입력받은 숫자로 바꿔주자!! 
			int x = lower_bound(v.begin(), v.end(), k) - v.begin();
			v[x] = k;
		}
	}
	cout << v.size();
}