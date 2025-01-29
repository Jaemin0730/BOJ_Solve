#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define INF 987654321
#define MAX 101

int main() {
    int n, k, p;
    cin >> n >> k >> p;
    int cnt, sol = 0;
    for (int i=0; i<n; i++) {
        cnt = 0;
        for (int j=0; j<k; j++) {
            int a;
            cin >> a;
            if (a == 0) cnt++;
        }
        if (cnt < p) sol++;
    }
    cout << sol;
}