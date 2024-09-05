#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 32001
int n, m;
vector<int> node[MAX]; // 노드들을 넣을 곳
int degree[MAX] = {};  // 두 노드 사이의 간선의 값
priority_queue<int, vector<int>, greater<int>> pq;  // 오름차순으로 정렬해야되니까 우선순위 큐 사용!

int main(void)
{
    u;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        node[x].pb(y);
        degree[y]++;
    }
    for (int i = 1; i <= n; i++) {
        if (degree[i] == 0) {
            pq.push(i);
        }
    }
    while (!pq.empty()) {
        int save = pq.top();
        pq.pop();
        cout << save << " ";
        for (int i = 0; i < node[save].size(); i++) {
            degree[node[save][i]]--;
            if (degree[node[save][i]] == 0) {
                pq.push(node[save][i]);
            }
        }
    }
}