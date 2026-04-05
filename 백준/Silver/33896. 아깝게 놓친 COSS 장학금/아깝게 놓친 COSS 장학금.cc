#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int, int> pii;

// 정렳 함수
bool compare(const tuple<int, int, string>& a, const tuple<int, int, string>& b) {
    if (get<0>(a) != get<0>(b)) return get<0>(a) > get<0>(b); // 효율성 내림차순
    if (get<1>(a) != get<1>(b)) return get<1>(a) < get<1>(b); // cost 오름차순
    return get<2>(a) < get<2>(b);                             // 이름 사전순
}

int main() {
    int n;
    cin >> n;
    vector<tuple<int, int, string>> v; // 학생들의 효율성 및 cost, 이름 정보를 넣는 벡터

    for (int i = 0; i < n; i++) {
        string name;
        int score, risk, cost;
        cin >> name >> score >> risk >> cost;
        int efficiency = (score * score * score) / (cost * (risk + 1));
        v.push_back({efficiency, cost, name});
    }

    // 정렬: 효율성 내림차순, cost 오름차순, 이름 사전순
    sort(v.begin(), v.end(), compare);

    // 2등 학생의 이름 출력
    cout << get<2>(v[1]) << '\n';

}
