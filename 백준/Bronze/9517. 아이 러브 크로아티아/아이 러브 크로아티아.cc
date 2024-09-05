#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;


int main(void)
{
    u
    int k,q;
    int ti = 0;
    cin >> k >> q;
    while(q--)
    {
        int t;
        char ans;
        cin >> t >> ans;
        ti += t;
        if (ti >= 210)
        {
            cout << k;
            break;
        }
        if (ans == 'T')
        {
            k++;
            if (k == 9) k = 1;
        }
    }
}