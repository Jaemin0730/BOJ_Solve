#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, m;
int MM[500][500] = {};
bool visited[500][500];
int cnt = 0, k = 0; // cnt : 그림의 개수, k : 그림의 최대 넓이
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
queue<pii> q;
int temp = 1;

void BFS(int x, int y) {
	visited[x][y] = true;
	q.push({x, y});
	while (!q.empty()) {
		int xx = q.front().first;
		int yy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = xx + dx[i];
			int ny = yy + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && MM[nx][ny] == 1) {
				visited[nx][ny] = true;
				q.push({nx, ny});
				temp++;
			}
		}
	}
}

int main(void)
{
    u
    cin >> n >> m;
	for (int i=0; i<n; ++i){            
        for (int j=0; j<m; ++j){        
            cin >> MM[i][j];
        }
    }
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (!visited[i][j] && MM[i][j] == 1) {
			    cnt++;
			    BFS(i, j);
			    k = max(k, temp);
			    temp = 1;
			}
		}
	}
	cout << cnt << "\n" << k;
}