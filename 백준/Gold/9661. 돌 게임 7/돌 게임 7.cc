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
    ll n; 
    cin >> n;
    n %= 5; 
    if (n == 0 || n == 2) {
        cout << "CY";
    }
    else {
        cout << "SK";
    }
}