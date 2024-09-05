#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

bool visited[101][101];
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
queue<pii> q;
vector<int> v;
int n, m, k, temp = 1;

void BFS(int x, int y) {
	visited[x][y] = true;
	q.push({x, y});
	while(!q.empty()) {
		int xx = q.front().fst;
		int yy = q.front().snd;
		q.pop();
	    for (int i=0; i<4; i++) {
			int nx = xx + dx[i];
			int ny = yy + dy[i];
			if (0 <= nx && nx < n && 0 <= ny && ny < m && !visited[nx][ny]) {
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
    cin >> n >> m >> k;
	for (int i=0; i<k; i++){            
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j=y1; j<y2; j++) {
        	for (int l=x1; l<x2; l++) {
        		visited[j][l] = true;
        	}
        }
    }
    
    for (int i=0; i<n; i++) {
    	for (int j=0; j<m; j++) {
    		if (!visited[i][j]) {
    			BFS(i, j);
	            v.pb(temp);
	            temp = 1;
    		}
    	} 
    }
    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for (int i=0; i<v.size(); i++) {
    	cout << v[i] << " ";
    }
}