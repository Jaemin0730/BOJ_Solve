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
#define MAX 2001

vector<int> v[MAX] = {};
bool visited[MAX] = {};
bool tf = false;
int n, m;
int cnt = 0;   // 정점 연결 횟수(4 이상이면 1 출력, 아니면 0 출력)

void DFS (int k) {
    cnt++;
    visited[k] = true;
    if (cnt == 5) {
        cout << 1;
        exit(0);
    }
    for (int i=0; i<v[k].size(); i++) {
        int temp = v[k][i];
        if (!visited[temp]) {
            DFS(temp);
        }
    }
    visited[k] = false;
    cnt--;
    return;
}

int main() {
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }
    // DFS(너비 우선 탐색)으로 너비가 4인지 확인
    for (int i=1; i<=n; i++) {
        DFS(i);
    }
    cout << 0;
}