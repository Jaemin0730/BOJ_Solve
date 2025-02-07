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
#define MAX 2001

// x : a 순서, y : b 순서
int x, y;

int main() {
    u
    string a, b;
    bool tf = false;
    cin >> a >> b;
    for (int i=0; i<a.size(); i++) {
        for (int j=0; j<b.size(); j++) {
            if (a[i] == b[j]) {
                x = i;
                y = j;
                tf = true;
                break;
            }
        }
        if (tf) break;
    }
    for (int i=0; i<b.size(); i++) {
        if (i == y) {
            cout << a << "\n";
            continue;
        }
        for (int j=0; j<a.size(); j++) {
            if (j == x) {
                cout << b[i];
            }  
            else {
                cout << '.';
            }
        }
        cout << "\n";
    }
    
}