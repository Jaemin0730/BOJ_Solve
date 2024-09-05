#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int c1[100] = {500, 300, 300, 200, 200, 200, 50, 50,
            50, 50, 30, 30, 30, 30, 30, 10, 10, 10, 10, 10, 10};
int c2[64] = {512, 256, 256, 128, 128, 128, 128, 64, 64, 64, 64, 64, 64, 64, 64,
            32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b;
    cin >> t;

    for (int i = 0; i < t; i++) 
    {
        cin >> a >> b;
        cout << (c1[a - 1] + c2[b - 1]) * 10000 << "\n";
    }
}