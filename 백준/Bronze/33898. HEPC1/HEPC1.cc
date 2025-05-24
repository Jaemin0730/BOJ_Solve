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
    string s1, s2;
    cin >> s1 >> s2;

    string s = s1 + s2[1] + s2[0];
    s += s;

    for (int i = 0 ; i < 4 ; i++) {
        if (s[i] == 'H' && s[i+1] == 'E' && s[i+2] == 'P' && s[i+3] == 'C') return cout << "YES", 0;
        if (s[i] == 'C' && s[i+1] == 'P' && s[i+2] == 'E' && s[i+3] == 'H') return cout << "YES", 0;
    }
    cout << "NO";
}