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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = a + b + c + d;
    if (ans + 300  <= 1800) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}