#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, s, d, t, ans;

int main(void)
{
    u;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n >> s >> d;
        ans = 0;
        for(int j = 0, a, b; j < n; j++){
            cin >> a >> b;
            if (s * d >= a)
                ans += b;
        }
        cout << "Data Set " << i <<":\n" << ans << '\n' << '\n';
    }
}