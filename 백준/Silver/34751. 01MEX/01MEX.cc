#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int a[2] = {0};
int n;
ll sol = 0;

int main(void)
{
    u;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == 0) {
            sol += i + a[1];
            a[0] = i;
        }
        else if (tmp == 1) {
            sol += 2 * a[0];
            a[1] = i;
        }
    }
    cout << sol;
}