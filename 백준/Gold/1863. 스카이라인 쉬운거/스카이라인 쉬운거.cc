#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define mp make_pair

typedef struct sett {
	int x; int y;
};

sett st;
stack<sett> s;
int n, cnt = 0, x, y;

void Find (sett st) {
    while (!s.empty() && st.y < s.top().y) {
        cnt++;
        s.pop();
    }
    if (s.empty() || s.top().y != st.y) {
        s.push(st);
    }
}

int main(void)
{
    u;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st.x >> st.y;
        Find(st);
    }
    while (!s.empty()) {
        if (s.top().y > 0) {
            cnt++;
        }
        s.pop();
    }
    cout << cnt;
}