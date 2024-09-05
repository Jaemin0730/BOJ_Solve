#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, k;
vector<int> v, s;

int GCD(int a, int b) 
{
	if (a % b == 0) {
    return b;
  }
  else {
    return GCD(b, a % b);
  }
}

int main() {
  u
  cin >> n;
	// 수 입력 -> 정렬
	for (int i = 0; i < n; i++) {
    int x;
		cin >> x;
		v.pb(x);
	}
	sort(v.begin(), v.end());
  // v 벡터들의 앞,뒤의 차이들의 최대공약수를 구하기
	k = v[1] - v[0]; 
	for (int i = 2; i < n; i++) {
    k = GCD(k, v[i] - v[i - 1]);
  }
  // 최대공약수를 통해 공약수들 찾기 -> s배열에 넣자!
	for (int i = 2; i * i <= k; i++) {
		if (k % i == 0) {
			s.pb(i); 
			s.pb(k / i);
		}
  }
  // 자기 자신도 넣어주고 정렬하기
	s.pb(k);
	sort(s.begin(), s.end());
  // 중복된 원소들 제거
	s.erase(unique(s.begin(), s.end()), s.end());
  // s 벡터들 차례대로 출력
	for (int i = 0; i < s.size(); i++) {
    cout << s[i] << " ";
  }
}