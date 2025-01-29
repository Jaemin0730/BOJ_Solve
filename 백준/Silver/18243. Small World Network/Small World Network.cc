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
#define MAX 101

vector<int> v[MAX] = {};
int n, m;

bool BFS (int k) {
    // BFS 탐색을 1부터 k까지 진행하기에
    // BFS 진행할 때마다 sol이랑 visited를 초기화 해줘야됨!
    // 그래서 함수 안에 지역함수로 만들어주자
    int sol[MAX] = {0,};
    bool vistied[MAX] = {0,};
    queue<int> q;

    q.push(k);
    vistied[k] = true;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i: v[x]) {
            if (vistied[i] == false) {
                vistied[i] = true;
                sol[i] = sol[x] + 1;
                // Big 첫번째 조건 : 해당 정점이 6을 넘어서 연결
                q.push(i);
            }
        }
    }
    // Big 두번째 조건 : 모든 정점이 연결된게 아님
    for (int i=1; i<=n; i++) {
        if (vistied[i] == false || sol[i] > 6) {
            return false;
        }
    }
    // Big 조건에 해당하지 않으면 Small 조건!
    return true;
}

int main() {
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        // 주어진 노드들을 넣어주기
        int a, b;
        cin >> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }
    for (int i=1; i<=n; i++) {
        // 각 노드마다 BFS 탐색 돌리기
        // 탐색을 통해 Small, Big 파악 후 출력하기
        if (!BFS(i)) {
            cout << "Big World!";
            return 0;
        }
    }
    cout << "Small World!";
}