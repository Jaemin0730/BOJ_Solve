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
    int a, b;
    cin >> a >> b;
    if (7*a > 13*b) printf("Axel");
    else if(7*a < 13*b) printf("Petra");
    else printf("lika");
}