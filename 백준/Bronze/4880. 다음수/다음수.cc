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
    int a[3];
    while (1)
    {
        cin >> a[0] >> a[1] >> a[2];
        if (!a[0] && !a[1] && !a[2])
            break;
        if (a[1] - a[0] == a[2] - a[1] && a[1] - a[0] != 0)
            cout << "AP " << a[1] - a[0] + a[2]<< '\n';
        else
            cout << "GP " << a[1] / a[0] * a[2] << '\n';
    }
}