#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <cmath>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

vector<int> v;
vector<int> vc;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
        vc.push_back(num);
    }
    sort(vc.begin(), vc.end());
    vc.erase(unique(vc.begin(), vc.end()), vc.end());

    for (int i = 0; i < n; i++)
    {
        auto a = lower_bound(vc.begin(), vc.end(), v[i]);
        cout << a - vc.begin() << " ";
    }

    return 0;
}