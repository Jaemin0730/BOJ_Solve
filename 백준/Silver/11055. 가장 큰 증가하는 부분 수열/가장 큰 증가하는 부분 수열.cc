#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define p pair<int, int>

int dp[1001];
int arr[1001];

int main(void)
{
    u;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int sol = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = arr[i];
        for (int j = 1; j < i; j++) {
            if (arr[i] > arr[j] && dp[i] < dp[j] + arr[i]) {
                dp[i] = dp[j] + arr[i];
                //cout << dp[i] << " ";
            }
        }
        //cout << "\n";
        if (sol < dp[i]) {
            sol = dp[i];
        }
        //cout << sol << "??\n";
    }
    cout << sol;
}