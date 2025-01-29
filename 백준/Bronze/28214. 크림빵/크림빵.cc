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
    int v[50] = {};
    for (int i=0; i<n*k; i++) {
        cin >> v[i];
    }
    int cnt = 0; // n 체크
    int check = 0; // 0이 입력된 개수 체크
    int sol = 0; // 빵 묶음 몇개 팔 수 있는지
    for (int i=0; i<n*k; i++) {
        cnt++;
        if (v[i] == 0) check++;
        if (cnt == k) {
            if (check < p) sol++;
            cnt = 0;
            check = 0;
        }
    }
    cout << sol;
}