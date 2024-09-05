#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n,k;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
bool b[100001];

void bfs (int n) {
    pq.push(mp(0, n));   // 시작값 세팅! 최소시간은 시작이니까 0 -> 우선순위 큐에서 짧은 순서 기준으로 정렬!
    while (!pq.empty()) {
        int cnt = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if (node == k) {    // k와 해당노드가 일치할때 술래잡기 성공!
            cout << cnt;
            return;
        }
        if (0 <= node * 2 && node * 2 <= 100000) {
            if (!b[node * 2]) {
                b[node * 2] = true;
                pq.push(mp(cnt, node * 2));
            }
        }
        if (0 <= node + 1 && node + 1 <= 100000) {
            if (!b[node + 1]) {
                b[node + 1] = true;
                pq.push(mp(cnt + 1, node + 1));
            }
        }
        if (0 <= node - 1 && node - 1 <= 100000) {
            if (!b[node - 1]) {
                b[node - 1] = true;
                pq.push(mp(cnt + 1, node - 1));
            }
        }
    }
}

int main(void)
{
    u;
    cin >> n >> k;
    b[n] = true;
    bfs(n);
}