#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;
#define ll long long
void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int n;
int m;
map<string, bool> mp;

int main(void)
{
    g();
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s] = true;
    }
    int cnt = 0;
    for (ll i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        if (mp[s] == true) {
            cnt++;
        }
    }
    cout << cnt;
}