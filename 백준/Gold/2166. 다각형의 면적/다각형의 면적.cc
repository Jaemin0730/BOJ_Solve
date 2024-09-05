#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

double ccw(double x1, double x2, double x3, double y1, double y2, double y3) {
    double d = x1 * y2 + x2 * y3 + x3 * y1;
    d += (-y1 * x2 - y2 * x3 - y3 * x1);
    return d / 2;
}

int main(void)
{
    u;
    int n;
    cin >> n;
    vector<pair<double, double>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].fst >> v[i].snd;
    }
    double sol = 0;
    for (int i = 1; i < n; i++) {
        sol += ccw(v[0].fst, v[i - 1].fst, v[i].fst, v[0].snd, v[i - 1].snd, v[i].snd);
    }
    printf("%.1lf", abs(sol));
}