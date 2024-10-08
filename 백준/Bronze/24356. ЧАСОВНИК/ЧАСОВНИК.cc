#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <list>
#include <cmath>
#include <set>
using namespace std;
#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t1, m1, t2, m2, diff;
    cin >> t1 >> m1 >> t2 >> m2;
    m1 += t1 * 60, m2 += t2 * 60;
    if (m1 > m2)
        m2 += 24 * 60;
    diff = m2 - m1;
    cout << diff << ' ' << diff / 30;
}