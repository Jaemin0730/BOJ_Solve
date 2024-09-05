#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, m;
bool remo[10] = {}; // 리모컨 멀쩡여부

// 받아온 숫자 k가 작동하는 숫자인지 판단해주는 함수
bool work (int k) {
    string s = to_string(k);
    for (int i=0; i<s.length(); i++) {
        if(remo[s[i] - '0']) {  // 만약에 망가진 번호이면 false 반환
            return false;
        }
    }
    // 망가진 번호가 없으면 true 반환
    return true;
}

int main(void)
{
    u
    cin >> n >> m;
    int t;

    while (m--) {
        int t;
        cin >> t;
        remo[t] = true;
    }

    int sol = abs(n - 100);  // 최소 연산 수

    for (int i=0; i<1000000; i++) {
        if (work(i)) {
            // i가 작동하면 -> i를 누르는 횟수 + i~이동하고자 하는 번호까지 +,- 누른 횟수
            int temp = to_string(i).length() + abs(n - i);
            sol = min(sol, temp);
        }
    }

    cout << sol;
}