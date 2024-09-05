#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, r, c;
int sol = 0;    // 내가 현재 찾고 있는 값

void re (int x, int y, int cnt) {
    if (y == r && x == c) {
        cout << sol;
        return;
    }
    else if (x <= c && y <= r && c < x + cnt && r < y + cnt) {    // x,y는 c,r보다는 작아야된다! + 해당 x,y는 그 분할정복 값보다는 작아야 한다!!!
        // 1 2 3 4분면 안에 내가 찾고 싶은 값이 있을 때!
        re(x, y, cnt / 2);
        re(x + cnt / 2, y, cnt / 2);
        re(x, y + cnt / 2, cnt / 2);
        re(x + cnt / 2, y + cnt / 2, cnt / 2);
    }
    else {
        sol += (cnt * cnt);
    }
}

int main(void)
{
    u;
    cin >> n >> r >> c;
    re(0, 0, pow(2, n));    // (x축, y축, 한 변의 길이)
}