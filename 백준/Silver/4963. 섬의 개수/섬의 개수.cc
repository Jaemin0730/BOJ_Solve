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
#define MAX 50

int v[MAX][MAX] = {};
bool tf[MAX][MAX] = {};
int a, b;

int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};


// DFS 함수
void DFS (int y, int x) {
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (ny < 0 || nx < 0 || ny >= b || nx >= a) continue; // 범위 제한
        if (v[ny][nx] == 1 && tf[ny][nx] == false) {
            tf[ny][nx] = true;
            DFS(ny, nx);
        }
    }
}


int main(void){
    while (1) {
        int cnt = 0;
        cin >> a >> b;
        if (a == 0 && b == 0) { // 출력 제한조건
            break;
        }
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                if (v[i][j] == 1 && tf[i][j] == false) {
                    tf[i][j] = true;
                    DFS(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
        memset(tf, 0, sizeof(tf)); // 배열 초기화 해주기
    }
}