#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define ll long long

ll s[10001];
ll dp[10001];


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    //ll sol = 0;
    dp[1] = s[1];
    dp[2] = s[1] + s[2];

    for (ll i = 3; i <= n; i++)
    {
        dp[i] = max({dp[i - 2] + s[i], s[i - 1] + dp[i - 3] + s[i], dp[i - 1]});
    }

    cout << dp[n];
}