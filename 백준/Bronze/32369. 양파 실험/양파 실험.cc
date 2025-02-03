#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int N, A, B, a = 1, b = 1;

int main() {
    u
    cin >> N >> A >> B;
    while (N--) {
        a += A;
        b += B;
        if (a < b) swap(a, b);
        else if (a == b) --b;
    }
    cout << a << " " << b;
}