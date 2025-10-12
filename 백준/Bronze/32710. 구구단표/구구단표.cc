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
    bool a = false;
    int n;
    cin >> n;
    // 구구단
    for (int i=2; i<10; i++) {
        if (a) break;
        else {
            if (n % i == 0 && n / i <= 9) a = true;
        }
    }
    if (n == 1) a = true;
    // 출력
    if (a) cout << 1;
    else cout << 0;
}