#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int main(void)
{
    u;
    int n;
    cin >> n;
    
    int sol = 0;
    
    if (n >= 1000000) sol = n * 20 / 100;
    else if (n >= 500000) sol = n * 15 / 100;
    else if (n >= 100000) sol = n * 10 / 100;
    else sol = n * 5 / 100;
    
    cout << sol << ' ' << n - sol;
    
}