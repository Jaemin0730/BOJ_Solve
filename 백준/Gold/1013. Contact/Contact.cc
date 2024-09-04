#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    u
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (regex_match(s,regex("(100+1+|01)+"))) cout << "YES\n";
        else cout << "NO\n";
    }
}