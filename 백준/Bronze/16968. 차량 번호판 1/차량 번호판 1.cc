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
    int sol = 1;
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == 'c') {
            if (s[i - 1] == 'c') sol *= 25;
            else sol *= 26;
        }
        else {
            if (s[i - 1] == 'd') sol *= 9;
            else sol *= 10;
        }
    }
    cout << sol;
}