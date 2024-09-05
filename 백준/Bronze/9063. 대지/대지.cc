#include <iostream>
using namespace std;

int main() {
    int minx = 100000, maxx = -100000;
    int miny = 100000, maxy = -100000;
    int n;
    cin >> n;
    int x[n] = {}, y[n] = {};
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
        if (minx > x[i]) minx = x[i];
        if (maxx < x[i]) maxx = x[i];
        if (miny > y[i]) miny = y[i];
        if (maxy < y[i]) maxy = y[i];
    }
    cout << (maxx - minx) * (maxy - miny);
}