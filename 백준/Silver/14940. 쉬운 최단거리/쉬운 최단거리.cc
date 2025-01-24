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
#define MAX 1005

int v[MAX][MAX] = {0,};
int sol[MAX][MAX] = {0,};

int n, m;
// dx, dy를 통해 상하좌우 방향으로 이동 가능!
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void BFS (int x, int y) {
    // BFS 탐색법 사용해야되니까 Queue 필수!
    queue<pii> q;   
    q.push({x, y});
    sol[x][y] = 1;

    while (!q.empty()) {
        int tx = q.front().fst;     // 큐에서 가장 앞에 있는 x
        int ty = q.front().snd;     // 큐에서 가장 앞에 있는 y
        q.pop();    // tx, ty 저장 후 큐에서 바로 삭제해주기

        for (int i=0; i<4; i++) {
            int nx = tx + dx[i];
            int ny = ty + dy[i];
            if (nx >= 0 && ny >=0 && nx <= n && ny <= m) {
                if (sol[nx][ny] == 0 && v[nx][ny] != 0) {
                    sol[nx][ny] = sol[tx][ty] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main() {
    cin >> n >> m;
    int a, b;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> v[i][j];
            if (v[i][j] == 2) {
                a = i;
                b = j;
            }
        }
    }

    // 주어진 값들 입력 후 목적지인 2를 기준으로 
    // BFS(너비 우선 탐색) 실행!
    // → 2부터 내려가면서 지나갈때마다가 거리 값 1 추가해주기 위해서
    BFS(a, b);

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (v[i][j] == 0) cout << 0 << " ";
            else cout << sol[i][j] - 1 << " ";
        }
        cout << "\n";
    }
}