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
int d[300001];
vector<int> v[300001];
int n, m, k, x;

// 다익스트라 알고리즘 함수
void dijkstra(int c) {
    queue<int> q;
    d[c] = 0;
    q.push(c);
    while(!q.empty()) {
        int tmp = q.front();
        q.pop();
        for (int i = 0; i < v[tmp].size(); i++) {
            int next = v[tmp][i];
            if (d[tmp] + 1 < d[next]) {
                d[next] = d[tmp] + 1;
                q.push(next);
            }
        }
    }
}

int main() {
    cin >> n >> m >> k >> x;
    // 각 노드마다 거리 값을 
    for (int i = 1; i <= n; i++) {
        d[i] = INF;
    }
    // 주어진 노드 시작 / 끝을 벡터에 넣어주기
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].pb(b);
    }
    // 다익스트라 알고리즘 사용 - 최단거리 찾기
    dijkstra(x);
    bool tf = false;
    for (int i = 1; i <= n; i++) {
        if (d[i] == k) {
            tf = true;
            cout << i << "\n";
        }
    }
    if (tf == false) cout << "-1";
}