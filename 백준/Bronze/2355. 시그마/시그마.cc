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

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    g();
    ll a, b;
    cin >> a >> b;
    if (a <= b) {
        cout << (a + b) * (b - a + 1) / 2;
    }
    else {
        cout << (a + b) * (a - b + 1) / 2;
    }
}