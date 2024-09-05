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
    int t;
    cin >> t;
    while (t--) {
        int dp[10001] = {1,};
        int c[21] = {};     // 동전의 가지 수 모아두는 배열
        int n, x;   // n: 동전 금액의 총 가지 수, x: 만들어야 할 금액
        cin >> n;
        for (int i = 0; i < n; i++) {   
            cin >> c[i];    // n가지 동전의 각 금액이 얼마인지
        }
        cin >> x;
        for (int i = 0; i < n; i++) {
            for (int j = c[i]; j <= x; j++) {
                dp[j] += dp[j - c[i]];
            }
        }
        cout << dp[x] << "\n";
    }
}