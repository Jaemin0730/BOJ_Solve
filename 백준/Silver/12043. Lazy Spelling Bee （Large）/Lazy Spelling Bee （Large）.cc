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
    for (int i=1; i<=n; i++) {
        string s;
        cin >> s;
        ll sol = 1;
        for (int j=0; j<s.size(); j++) {
            set<char> st;
            st.insert(s[j]);
            if (j > 0) st.insert(s[j - 1]);
            if (j < s.size() - 1) st.insert(s[j + 1]);
            sol = (sol * st.size()) % 1000000007;
        }
        cout << "Case #" << i << ": " << sol << "\n";
    }
}