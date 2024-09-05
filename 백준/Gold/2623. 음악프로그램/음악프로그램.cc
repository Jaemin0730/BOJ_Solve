#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 1001
int n, m;
vector<int> node[MAX]; // 노드들을 넣을 곳
int degree[MAX] = {};  // 두 노드 사이의 간선의 값
queue<int> q;

int main(void)
{
    u;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        vector<int> v;
        int t;
        cin >> t;
        for (int j = 0; j < t; j++) {
            int k;
            cin >> k;
            v.pb(k);
        }
        for (int j = 0; j < v.size(); j++) {
            for (int l = j + 1; l < v.size(); l++) {
                node[v[j]].pb(v[l]);
                degree[v[l]]++;
            }
        }
    }
    // 위상정렬 시작!
    for (int i = 1; i <= n; i++) {
        if (degree[i] == 0) {
            q.push(i);
        }
    }
    vector<int> sol;
    while (!q.empty()) {
        int save = q.front();
        q.pop();
        sol.pb(save);
        for (int i = 0; i < node[save].size(); i++) {
            degree[node[save][i]]--;
            if (degree[node[save][i]] == 0) {
                q.push(node[save][i]);
            }
        }
    }
    // 출력하기!
    if (sol.size() != n) {
        cout << 0;
    }
    else {
        for (int i = 0; i < n; i++) {
            cout << sol[i] << "\n";
        }
    }
}