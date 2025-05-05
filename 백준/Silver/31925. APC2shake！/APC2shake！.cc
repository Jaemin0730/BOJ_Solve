    #include <bits/stdc++.h>
    using namespace std;
    #define u ios::sync_with_stdio(false); cin.tie(NULL);
    #define fst first
    #define snd second
    #define pb push_back
    #define mp make_pair
    typedef long long ll;
    typedef pair<int, int> pii;

    int main() {
        u
        int n;
        cin >> n;
        vector<pair<int, string>> v;
        vector<string> v2;
        for (int i=0; i<n; i++) {
            string s1, s2, s3;
            int w1, w2;
            cin >> s1 >> s2 >> s3 >> w1 >> w2;
            // 주어진 4개의 조건 해당하면 v에 넣기, 아니면 Pass~
            if (s2 == "hewhak" || s3 == "winner" || w1 == 3 || w1 == 2 || w1 == 1) {
                continue;
            }
            v.pb({w2, s1});
        }
        // 정렬
        sort(v.begin(), v.end());
        for(int i=0; i<min(10, (int)v.size()); i++) {
            v2.pb(v[i].second);
        }
        sort(v2.begin(), v2.end());
        cout << v2.size() << "\n";
        for (int i = 0; i < v2.size(); i++) {
            cout << v2[i] << "\n";
        }
    }