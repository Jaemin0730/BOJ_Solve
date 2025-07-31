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
    int n;
    cin >> n;
    int a[n] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k = a[0];
    sort(a, a + n);
    if (a[0] == k) {
        cout << "ez";
    } 
    else if (a[n - 1] == k) {
        cout << "hard";
    }
    else {
        cout << "?";
    }
}