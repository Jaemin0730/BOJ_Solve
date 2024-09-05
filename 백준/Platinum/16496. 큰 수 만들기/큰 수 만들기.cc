#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

vector <string> v;

bool compare(string a, string b){
	return a + b > b + a;
}

int main() {
    u
    int n, a;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a;
        // 입력받은 정수를 문자열로 변경
		v.pb(to_string(a));
	}
    // 변경한 문자열을 정렬!
	sort(v.begin(), v.end(), compare);
	string s = "";
    // 맨 앞이 0인 경우 -> 바로 종료
	if (v[0]=="0") {
		cout<<"0";
		return 0;
	}
	for (int i=0; i<v.size(); i++){
		s += v[i];
	}
	cout<< s;
}