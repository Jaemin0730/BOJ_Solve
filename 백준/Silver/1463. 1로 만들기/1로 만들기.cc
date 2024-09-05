#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

#define mod 1234567891

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int dp[1000001];
    dp[2] = 1;
    dp[3] = 1;

    for (int i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1;

        if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);

        if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
    }

    cout << dp[n];
    return 0;
}