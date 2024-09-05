#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define ll long long

int gp[1001][1001];     // 인접 행렬 값 받는 행렬!
bool vs[1001];           // 방문 시 true, 방문 아닐 시 false
queue<int> q;
int n, m, v;

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

void dfs(int num) {
    cout << num << " ";
    for (int i = 1; i <= n; i++) {
        if (!vs[i] && gp[num][i] == 1) {
            // cout << i << "\n";
            vs[i] = true;
            dfs(i);
        }
    }
}

void bfs(int num) {
    q.push(num);
    vs[num] = true;
    while (!q.empty()) {
        num = q.front();
        q.pop();
        cout << num << " ";
        for (int i = 1; i <= n; i++) {
            if (!vs[i] && gp[num][i] == 1) {
                // cout << i << "\n";
                vs[i] = true;
                q.push(i);
            }
        }
    }
}

int main(void)
{
    g();
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        gp[x][y] = 1;
        gp[y][x] = 1;
    }
    vs[v] = 1;
    dfs(v);
    cout << "\n";
    memset(vs, false, sizeof(vs));
    bfs(v);
}